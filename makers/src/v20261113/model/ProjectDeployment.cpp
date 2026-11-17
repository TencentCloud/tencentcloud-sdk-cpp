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

#include <tencentcloud/makers/v20261113/model/ProjectDeployment.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Makers::V20261113::Model;
using namespace std;

ProjectDeployment::ProjectDeployment() :
    m_deploymentIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_buildCostHasBeenSet(false),
    m_viaMetaHasBeenSet(false),
    m_envHasBeenSet(false),
    m_repoBranchHasBeenSet(false),
    m_repoCommitHashHasBeenSet(false),
    m_repoCommitMsgHasBeenSet(false),
    m_previewUrlHasBeenSet(false),
    m_coverUrlHasBeenSet(false),
    m_createdOnHasBeenSet(false),
    m_modifiedOnHasBeenSet(false),
    m_dplRepoUrlHasBeenSet(false)
{
}

CoreInternalOutcome ProjectDeployment::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeploymentId") && !value["DeploymentId"].IsNull())
    {
        if (!value["DeploymentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectDeployment.DeploymentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deploymentId = string(value["DeploymentId"].GetString());
        m_deploymentIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectDeployment.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectDeployment.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("BuildCost") && !value["BuildCost"].IsNull())
    {
        if (!value["BuildCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectDeployment.BuildCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buildCost = string(value["BuildCost"].GetString());
        m_buildCostHasBeenSet = true;
    }

    if (value.HasMember("ViaMeta") && !value["ViaMeta"].IsNull())
    {
        if (!value["ViaMeta"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectDeployment.ViaMeta` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_viaMeta = string(value["ViaMeta"].GetString());
        m_viaMetaHasBeenSet = true;
    }

    if (value.HasMember("Env") && !value["Env"].IsNull())
    {
        if (!value["Env"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectDeployment.Env` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_env = string(value["Env"].GetString());
        m_envHasBeenSet = true;
    }

    if (value.HasMember("RepoBranch") && !value["RepoBranch"].IsNull())
    {
        if (!value["RepoBranch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectDeployment.RepoBranch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repoBranch = string(value["RepoBranch"].GetString());
        m_repoBranchHasBeenSet = true;
    }

    if (value.HasMember("RepoCommitHash") && !value["RepoCommitHash"].IsNull())
    {
        if (!value["RepoCommitHash"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectDeployment.RepoCommitHash` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repoCommitHash = string(value["RepoCommitHash"].GetString());
        m_repoCommitHashHasBeenSet = true;
    }

    if (value.HasMember("RepoCommitMsg") && !value["RepoCommitMsg"].IsNull())
    {
        if (!value["RepoCommitMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectDeployment.RepoCommitMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repoCommitMsg = string(value["RepoCommitMsg"].GetString());
        m_repoCommitMsgHasBeenSet = true;
    }

    if (value.HasMember("PreviewUrl") && !value["PreviewUrl"].IsNull())
    {
        if (!value["PreviewUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectDeployment.PreviewUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_previewUrl = string(value["PreviewUrl"].GetString());
        m_previewUrlHasBeenSet = true;
    }

    if (value.HasMember("CoverUrl") && !value["CoverUrl"].IsNull())
    {
        if (!value["CoverUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectDeployment.CoverUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_coverUrl = string(value["CoverUrl"].GetString());
        m_coverUrlHasBeenSet = true;
    }

    if (value.HasMember("CreatedOn") && !value["CreatedOn"].IsNull())
    {
        if (!value["CreatedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectDeployment.CreatedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdOn = string(value["CreatedOn"].GetString());
        m_createdOnHasBeenSet = true;
    }

    if (value.HasMember("ModifiedOn") && !value["ModifiedOn"].IsNull())
    {
        if (!value["ModifiedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectDeployment.ModifiedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedOn = string(value["ModifiedOn"].GetString());
        m_modifiedOnHasBeenSet = true;
    }

    if (value.HasMember("DplRepoUrl") && !value["DplRepoUrl"].IsNull())
    {
        if (!value["DplRepoUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectDeployment.DplRepoUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dplRepoUrl = string(value["DplRepoUrl"].GetString());
        m_dplRepoUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProjectDeployment::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deploymentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeploymentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deploymentId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_buildCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuildCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buildCost.c_str(), allocator).Move(), allocator);
    }

    if (m_viaMetaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ViaMeta";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_viaMeta.c_str(), allocator).Move(), allocator);
    }

    if (m_envHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Env";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_env.c_str(), allocator).Move(), allocator);
    }

    if (m_repoBranchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepoBranch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repoBranch.c_str(), allocator).Move(), allocator);
    }

    if (m_repoCommitHashHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepoCommitHash";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repoCommitHash.c_str(), allocator).Move(), allocator);
    }

    if (m_repoCommitMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepoCommitMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repoCommitMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_previewUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreviewUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_previewUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_coverUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoverUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_coverUrl.c_str(), allocator).Move(), allocator);
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

    if (m_dplRepoUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DplRepoUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dplRepoUrl.c_str(), allocator).Move(), allocator);
    }

}


string ProjectDeployment::GetDeploymentId() const
{
    return m_deploymentId;
}

void ProjectDeployment::SetDeploymentId(const string& _deploymentId)
{
    m_deploymentId = _deploymentId;
    m_deploymentIdHasBeenSet = true;
}

bool ProjectDeployment::DeploymentIdHasBeenSet() const
{
    return m_deploymentIdHasBeenSet;
}

string ProjectDeployment::GetProjectId() const
{
    return m_projectId;
}

void ProjectDeployment::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ProjectDeployment::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ProjectDeployment::GetStatus() const
{
    return m_status;
}

void ProjectDeployment::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ProjectDeployment::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ProjectDeployment::GetBuildCost() const
{
    return m_buildCost;
}

void ProjectDeployment::SetBuildCost(const string& _buildCost)
{
    m_buildCost = _buildCost;
    m_buildCostHasBeenSet = true;
}

bool ProjectDeployment::BuildCostHasBeenSet() const
{
    return m_buildCostHasBeenSet;
}

string ProjectDeployment::GetViaMeta() const
{
    return m_viaMeta;
}

void ProjectDeployment::SetViaMeta(const string& _viaMeta)
{
    m_viaMeta = _viaMeta;
    m_viaMetaHasBeenSet = true;
}

bool ProjectDeployment::ViaMetaHasBeenSet() const
{
    return m_viaMetaHasBeenSet;
}

string ProjectDeployment::GetEnv() const
{
    return m_env;
}

void ProjectDeployment::SetEnv(const string& _env)
{
    m_env = _env;
    m_envHasBeenSet = true;
}

bool ProjectDeployment::EnvHasBeenSet() const
{
    return m_envHasBeenSet;
}

string ProjectDeployment::GetRepoBranch() const
{
    return m_repoBranch;
}

void ProjectDeployment::SetRepoBranch(const string& _repoBranch)
{
    m_repoBranch = _repoBranch;
    m_repoBranchHasBeenSet = true;
}

bool ProjectDeployment::RepoBranchHasBeenSet() const
{
    return m_repoBranchHasBeenSet;
}

string ProjectDeployment::GetRepoCommitHash() const
{
    return m_repoCommitHash;
}

void ProjectDeployment::SetRepoCommitHash(const string& _repoCommitHash)
{
    m_repoCommitHash = _repoCommitHash;
    m_repoCommitHashHasBeenSet = true;
}

bool ProjectDeployment::RepoCommitHashHasBeenSet() const
{
    return m_repoCommitHashHasBeenSet;
}

string ProjectDeployment::GetRepoCommitMsg() const
{
    return m_repoCommitMsg;
}

void ProjectDeployment::SetRepoCommitMsg(const string& _repoCommitMsg)
{
    m_repoCommitMsg = _repoCommitMsg;
    m_repoCommitMsgHasBeenSet = true;
}

bool ProjectDeployment::RepoCommitMsgHasBeenSet() const
{
    return m_repoCommitMsgHasBeenSet;
}

string ProjectDeployment::GetPreviewUrl() const
{
    return m_previewUrl;
}

void ProjectDeployment::SetPreviewUrl(const string& _previewUrl)
{
    m_previewUrl = _previewUrl;
    m_previewUrlHasBeenSet = true;
}

bool ProjectDeployment::PreviewUrlHasBeenSet() const
{
    return m_previewUrlHasBeenSet;
}

string ProjectDeployment::GetCoverUrl() const
{
    return m_coverUrl;
}

void ProjectDeployment::SetCoverUrl(const string& _coverUrl)
{
    m_coverUrl = _coverUrl;
    m_coverUrlHasBeenSet = true;
}

bool ProjectDeployment::CoverUrlHasBeenSet() const
{
    return m_coverUrlHasBeenSet;
}

string ProjectDeployment::GetCreatedOn() const
{
    return m_createdOn;
}

void ProjectDeployment::SetCreatedOn(const string& _createdOn)
{
    m_createdOn = _createdOn;
    m_createdOnHasBeenSet = true;
}

bool ProjectDeployment::CreatedOnHasBeenSet() const
{
    return m_createdOnHasBeenSet;
}

string ProjectDeployment::GetModifiedOn() const
{
    return m_modifiedOn;
}

void ProjectDeployment::SetModifiedOn(const string& _modifiedOn)
{
    m_modifiedOn = _modifiedOn;
    m_modifiedOnHasBeenSet = true;
}

bool ProjectDeployment::ModifiedOnHasBeenSet() const
{
    return m_modifiedOnHasBeenSet;
}

string ProjectDeployment::GetDplRepoUrl() const
{
    return m_dplRepoUrl;
}

void ProjectDeployment::SetDplRepoUrl(const string& _dplRepoUrl)
{
    m_dplRepoUrl = _dplRepoUrl;
    m_dplRepoUrlHasBeenSet = true;
}

bool ProjectDeployment::DplRepoUrlHasBeenSet() const
{
    return m_dplRepoUrlHasBeenSet;
}


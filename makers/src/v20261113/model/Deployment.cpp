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

#include <tencentcloud/makers/v20261113/model/Deployment.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Makers::V20261113::Model;
using namespace std;

Deployment::Deployment() :
    m_deploymentIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_originalStatusHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_buildCostHasBeenSet(false),
    m_viaMetaHasBeenSet(false),
    m_envHasBeenSet(false),
    m_repoBranchHasBeenSet(false),
    m_repoCommitHashHasBeenSet(false),
    m_repoCommitMsgHasBeenSet(false),
    m_previewUrlHasBeenSet(false),
    m_projectUrlHasBeenSet(false),
    m_usedInProdHasBeenSet(false),
    m_coverUrlHasBeenSet(false),
    m_metaDataHasBeenSet(false),
    m_dplRepoUrlHasBeenSet(false),
    m_createdOnHasBeenSet(false),
    m_modifiedOnHasBeenSet(false)
{
}

CoreInternalOutcome Deployment::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeploymentId") && !value["DeploymentId"].IsNull())
    {
        if (!value["DeploymentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Deployment.DeploymentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deploymentId = string(value["DeploymentId"].GetString());
        m_deploymentIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Deployment.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Deployment.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("OriginalStatus") && !value["OriginalStatus"].IsNull())
    {
        if (!value["OriginalStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Deployment.OriginalStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originalStatus = string(value["OriginalStatus"].GetString());
        m_originalStatusHasBeenSet = true;
    }

    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Deployment.Code` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_code = value["Code"].GetInt64();
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("BuildCost") && !value["BuildCost"].IsNull())
    {
        if (!value["BuildCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Deployment.BuildCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buildCost = string(value["BuildCost"].GetString());
        m_buildCostHasBeenSet = true;
    }

    if (value.HasMember("ViaMeta") && !value["ViaMeta"].IsNull())
    {
        if (!value["ViaMeta"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Deployment.ViaMeta` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_viaMeta = string(value["ViaMeta"].GetString());
        m_viaMetaHasBeenSet = true;
    }

    if (value.HasMember("Env") && !value["Env"].IsNull())
    {
        if (!value["Env"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Deployment.Env` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_env = string(value["Env"].GetString());
        m_envHasBeenSet = true;
    }

    if (value.HasMember("RepoBranch") && !value["RepoBranch"].IsNull())
    {
        if (!value["RepoBranch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Deployment.RepoBranch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repoBranch = string(value["RepoBranch"].GetString());
        m_repoBranchHasBeenSet = true;
    }

    if (value.HasMember("RepoCommitHash") && !value["RepoCommitHash"].IsNull())
    {
        if (!value["RepoCommitHash"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Deployment.RepoCommitHash` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repoCommitHash = string(value["RepoCommitHash"].GetString());
        m_repoCommitHashHasBeenSet = true;
    }

    if (value.HasMember("RepoCommitMsg") && !value["RepoCommitMsg"].IsNull())
    {
        if (!value["RepoCommitMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Deployment.RepoCommitMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repoCommitMsg = string(value["RepoCommitMsg"].GetString());
        m_repoCommitMsgHasBeenSet = true;
    }

    if (value.HasMember("PreviewUrl") && !value["PreviewUrl"].IsNull())
    {
        if (!value["PreviewUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Deployment.PreviewUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_previewUrl = string(value["PreviewUrl"].GetString());
        m_previewUrlHasBeenSet = true;
    }

    if (value.HasMember("ProjectUrl") && !value["ProjectUrl"].IsNull())
    {
        if (!value["ProjectUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Deployment.ProjectUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectUrl = string(value["ProjectUrl"].GetString());
        m_projectUrlHasBeenSet = true;
    }

    if (value.HasMember("UsedInProd") && !value["UsedInProd"].IsNull())
    {
        if (!value["UsedInProd"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Deployment.UsedInProd` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_usedInProd = value["UsedInProd"].GetBool();
        m_usedInProdHasBeenSet = true;
    }

    if (value.HasMember("CoverUrl") && !value["CoverUrl"].IsNull())
    {
        if (!value["CoverUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Deployment.CoverUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_coverUrl = string(value["CoverUrl"].GetString());
        m_coverUrlHasBeenSet = true;
    }

    if (value.HasMember("MetaData") && !value["MetaData"].IsNull())
    {
        if (!value["MetaData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Deployment.MetaData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metaData = string(value["MetaData"].GetString());
        m_metaDataHasBeenSet = true;
    }

    if (value.HasMember("DplRepoUrl") && !value["DplRepoUrl"].IsNull())
    {
        if (!value["DplRepoUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Deployment.DplRepoUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dplRepoUrl = string(value["DplRepoUrl"].GetString());
        m_dplRepoUrlHasBeenSet = true;
    }

    if (value.HasMember("CreatedOn") && !value["CreatedOn"].IsNull())
    {
        if (!value["CreatedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Deployment.CreatedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdOn = string(value["CreatedOn"].GetString());
        m_createdOnHasBeenSet = true;
    }

    if (value.HasMember("ModifiedOn") && !value["ModifiedOn"].IsNull())
    {
        if (!value["ModifiedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Deployment.ModifiedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedOn = string(value["ModifiedOn"].GetString());
        m_modifiedOnHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Deployment::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_originalStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originalStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_code, allocator);
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

    if (m_projectUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_usedInProdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedInProd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedInProd, allocator);
    }

    if (m_coverUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoverUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_coverUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_metaDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metaData.c_str(), allocator).Move(), allocator);
    }

    if (m_dplRepoUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DplRepoUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dplRepoUrl.c_str(), allocator).Move(), allocator);
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


string Deployment::GetDeploymentId() const
{
    return m_deploymentId;
}

void Deployment::SetDeploymentId(const string& _deploymentId)
{
    m_deploymentId = _deploymentId;
    m_deploymentIdHasBeenSet = true;
}

bool Deployment::DeploymentIdHasBeenSet() const
{
    return m_deploymentIdHasBeenSet;
}

string Deployment::GetProjectId() const
{
    return m_projectId;
}

void Deployment::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool Deployment::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string Deployment::GetStatus() const
{
    return m_status;
}

void Deployment::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Deployment::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string Deployment::GetOriginalStatus() const
{
    return m_originalStatus;
}

void Deployment::SetOriginalStatus(const string& _originalStatus)
{
    m_originalStatus = _originalStatus;
    m_originalStatusHasBeenSet = true;
}

bool Deployment::OriginalStatusHasBeenSet() const
{
    return m_originalStatusHasBeenSet;
}

int64_t Deployment::GetCode() const
{
    return m_code;
}

void Deployment::SetCode(const int64_t& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool Deployment::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string Deployment::GetBuildCost() const
{
    return m_buildCost;
}

void Deployment::SetBuildCost(const string& _buildCost)
{
    m_buildCost = _buildCost;
    m_buildCostHasBeenSet = true;
}

bool Deployment::BuildCostHasBeenSet() const
{
    return m_buildCostHasBeenSet;
}

string Deployment::GetViaMeta() const
{
    return m_viaMeta;
}

void Deployment::SetViaMeta(const string& _viaMeta)
{
    m_viaMeta = _viaMeta;
    m_viaMetaHasBeenSet = true;
}

bool Deployment::ViaMetaHasBeenSet() const
{
    return m_viaMetaHasBeenSet;
}

string Deployment::GetEnv() const
{
    return m_env;
}

void Deployment::SetEnv(const string& _env)
{
    m_env = _env;
    m_envHasBeenSet = true;
}

bool Deployment::EnvHasBeenSet() const
{
    return m_envHasBeenSet;
}

string Deployment::GetRepoBranch() const
{
    return m_repoBranch;
}

void Deployment::SetRepoBranch(const string& _repoBranch)
{
    m_repoBranch = _repoBranch;
    m_repoBranchHasBeenSet = true;
}

bool Deployment::RepoBranchHasBeenSet() const
{
    return m_repoBranchHasBeenSet;
}

string Deployment::GetRepoCommitHash() const
{
    return m_repoCommitHash;
}

void Deployment::SetRepoCommitHash(const string& _repoCommitHash)
{
    m_repoCommitHash = _repoCommitHash;
    m_repoCommitHashHasBeenSet = true;
}

bool Deployment::RepoCommitHashHasBeenSet() const
{
    return m_repoCommitHashHasBeenSet;
}

string Deployment::GetRepoCommitMsg() const
{
    return m_repoCommitMsg;
}

void Deployment::SetRepoCommitMsg(const string& _repoCommitMsg)
{
    m_repoCommitMsg = _repoCommitMsg;
    m_repoCommitMsgHasBeenSet = true;
}

bool Deployment::RepoCommitMsgHasBeenSet() const
{
    return m_repoCommitMsgHasBeenSet;
}

string Deployment::GetPreviewUrl() const
{
    return m_previewUrl;
}

void Deployment::SetPreviewUrl(const string& _previewUrl)
{
    m_previewUrl = _previewUrl;
    m_previewUrlHasBeenSet = true;
}

bool Deployment::PreviewUrlHasBeenSet() const
{
    return m_previewUrlHasBeenSet;
}

string Deployment::GetProjectUrl() const
{
    return m_projectUrl;
}

void Deployment::SetProjectUrl(const string& _projectUrl)
{
    m_projectUrl = _projectUrl;
    m_projectUrlHasBeenSet = true;
}

bool Deployment::ProjectUrlHasBeenSet() const
{
    return m_projectUrlHasBeenSet;
}

bool Deployment::GetUsedInProd() const
{
    return m_usedInProd;
}

void Deployment::SetUsedInProd(const bool& _usedInProd)
{
    m_usedInProd = _usedInProd;
    m_usedInProdHasBeenSet = true;
}

bool Deployment::UsedInProdHasBeenSet() const
{
    return m_usedInProdHasBeenSet;
}

string Deployment::GetCoverUrl() const
{
    return m_coverUrl;
}

void Deployment::SetCoverUrl(const string& _coverUrl)
{
    m_coverUrl = _coverUrl;
    m_coverUrlHasBeenSet = true;
}

bool Deployment::CoverUrlHasBeenSet() const
{
    return m_coverUrlHasBeenSet;
}

string Deployment::GetMetaData() const
{
    return m_metaData;
}

void Deployment::SetMetaData(const string& _metaData)
{
    m_metaData = _metaData;
    m_metaDataHasBeenSet = true;
}

bool Deployment::MetaDataHasBeenSet() const
{
    return m_metaDataHasBeenSet;
}

string Deployment::GetDplRepoUrl() const
{
    return m_dplRepoUrl;
}

void Deployment::SetDplRepoUrl(const string& _dplRepoUrl)
{
    m_dplRepoUrl = _dplRepoUrl;
    m_dplRepoUrlHasBeenSet = true;
}

bool Deployment::DplRepoUrlHasBeenSet() const
{
    return m_dplRepoUrlHasBeenSet;
}

string Deployment::GetCreatedOn() const
{
    return m_createdOn;
}

void Deployment::SetCreatedOn(const string& _createdOn)
{
    m_createdOn = _createdOn;
    m_createdOnHasBeenSet = true;
}

bool Deployment::CreatedOnHasBeenSet() const
{
    return m_createdOnHasBeenSet;
}

string Deployment::GetModifiedOn() const
{
    return m_modifiedOn;
}

void Deployment::SetModifiedOn(const string& _modifiedOn)
{
    m_modifiedOn = _modifiedOn;
    m_modifiedOnHasBeenSet = true;
}

bool Deployment::ModifiedOnHasBeenSet() const
{
    return m_modifiedOnHasBeenSet;
}


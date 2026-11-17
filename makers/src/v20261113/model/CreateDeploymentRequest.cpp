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

#include <tencentcloud/makers/v20261113/model/CreateDeploymentRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Makers::V20261113::Model;
using namespace std;

CreateDeploymentRequest::CreateDeploymentRequest() :
    m_zoneIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_viaMetaHasBeenSet(false),
    m_envHasBeenSet(false),
    m_providerHasBeenSet(false),
    m_distTypeHasBeenSet(false),
    m_tempBucketPathHasBeenSet(false),
    m_repoBranchHasBeenSet(false),
    m_repoCommitHashHasBeenSet(false),
    m_repoCommitMsgHasBeenSet(false),
    m_buildFromHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_ciSpecHasBeenSet(false)
{
}

string CreateDeploymentRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_viaMetaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ViaMeta";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_viaMeta.c_str(), allocator).Move(), allocator);
    }

    if (m_envHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Env";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_env.c_str(), allocator).Move(), allocator);
    }

    if (m_providerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Provider";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_provider.c_str(), allocator).Move(), allocator);
    }

    if (m_distTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DistType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_distType.c_str(), allocator).Move(), allocator);
    }

    if (m_tempBucketPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TempBucketPath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tempBucketPath.c_str(), allocator).Move(), allocator);
    }

    if (m_repoBranchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepoBranch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_repoBranch.c_str(), allocator).Move(), allocator);
    }

    if (m_repoCommitHashHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepoCommitHash";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_repoCommitHash.c_str(), allocator).Move(), allocator);
    }

    if (m_repoCommitMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepoCommitMsg";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_repoCommitMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_buildFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuildFrom";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_buildFrom.c_str(), allocator).Move(), allocator);
    }

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_ciSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CiSpec";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ciSpec.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDeploymentRequest::GetZoneId() const
{
    return m_zoneId;
}

void CreateDeploymentRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool CreateDeploymentRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string CreateDeploymentRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateDeploymentRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateDeploymentRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CreateDeploymentRequest::GetViaMeta() const
{
    return m_viaMeta;
}

void CreateDeploymentRequest::SetViaMeta(const string& _viaMeta)
{
    m_viaMeta = _viaMeta;
    m_viaMetaHasBeenSet = true;
}

bool CreateDeploymentRequest::ViaMetaHasBeenSet() const
{
    return m_viaMetaHasBeenSet;
}

string CreateDeploymentRequest::GetEnv() const
{
    return m_env;
}

void CreateDeploymentRequest::SetEnv(const string& _env)
{
    m_env = _env;
    m_envHasBeenSet = true;
}

bool CreateDeploymentRequest::EnvHasBeenSet() const
{
    return m_envHasBeenSet;
}

string CreateDeploymentRequest::GetProvider() const
{
    return m_provider;
}

void CreateDeploymentRequest::SetProvider(const string& _provider)
{
    m_provider = _provider;
    m_providerHasBeenSet = true;
}

bool CreateDeploymentRequest::ProviderHasBeenSet() const
{
    return m_providerHasBeenSet;
}

string CreateDeploymentRequest::GetDistType() const
{
    return m_distType;
}

void CreateDeploymentRequest::SetDistType(const string& _distType)
{
    m_distType = _distType;
    m_distTypeHasBeenSet = true;
}

bool CreateDeploymentRequest::DistTypeHasBeenSet() const
{
    return m_distTypeHasBeenSet;
}

string CreateDeploymentRequest::GetTempBucketPath() const
{
    return m_tempBucketPath;
}

void CreateDeploymentRequest::SetTempBucketPath(const string& _tempBucketPath)
{
    m_tempBucketPath = _tempBucketPath;
    m_tempBucketPathHasBeenSet = true;
}

bool CreateDeploymentRequest::TempBucketPathHasBeenSet() const
{
    return m_tempBucketPathHasBeenSet;
}

string CreateDeploymentRequest::GetRepoBranch() const
{
    return m_repoBranch;
}

void CreateDeploymentRequest::SetRepoBranch(const string& _repoBranch)
{
    m_repoBranch = _repoBranch;
    m_repoBranchHasBeenSet = true;
}

bool CreateDeploymentRequest::RepoBranchHasBeenSet() const
{
    return m_repoBranchHasBeenSet;
}

string CreateDeploymentRequest::GetRepoCommitHash() const
{
    return m_repoCommitHash;
}

void CreateDeploymentRequest::SetRepoCommitHash(const string& _repoCommitHash)
{
    m_repoCommitHash = _repoCommitHash;
    m_repoCommitHashHasBeenSet = true;
}

bool CreateDeploymentRequest::RepoCommitHashHasBeenSet() const
{
    return m_repoCommitHashHasBeenSet;
}

string CreateDeploymentRequest::GetRepoCommitMsg() const
{
    return m_repoCommitMsg;
}

void CreateDeploymentRequest::SetRepoCommitMsg(const string& _repoCommitMsg)
{
    m_repoCommitMsg = _repoCommitMsg;
    m_repoCommitMsgHasBeenSet = true;
}

bool CreateDeploymentRequest::RepoCommitMsgHasBeenSet() const
{
    return m_repoCommitMsgHasBeenSet;
}

string CreateDeploymentRequest::GetBuildFrom() const
{
    return m_buildFrom;
}

void CreateDeploymentRequest::SetBuildFrom(const string& _buildFrom)
{
    m_buildFrom = _buildFrom;
    m_buildFromHasBeenSet = true;
}

bool CreateDeploymentRequest::BuildFromHasBeenSet() const
{
    return m_buildFromHasBeenSet;
}

string CreateDeploymentRequest::GetTemplateId() const
{
    return m_templateId;
}

void CreateDeploymentRequest::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool CreateDeploymentRequest::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string CreateDeploymentRequest::GetCiSpec() const
{
    return m_ciSpec;
}

void CreateDeploymentRequest::SetCiSpec(const string& _ciSpec)
{
    m_ciSpec = _ciSpec;
    m_ciSpecHasBeenSet = true;
}

bool CreateDeploymentRequest::CiSpecHasBeenSet() const
{
    return m_ciSpecHasBeenSet;
}



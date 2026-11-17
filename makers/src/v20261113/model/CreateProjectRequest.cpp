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

#include <tencentcloud/makers/v20261113/model/CreateProjectRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Makers::V20261113::Model;
using namespace std;

CreateProjectRequest::CreateProjectRequest() :
    m_zoneIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_channelHasBeenSet(false),
    m_providerHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_nodeJsVersionHasBeenSet(false),
    m_rootDirHasBeenSet(false),
    m_outputDirHasBeenSet(false),
    m_buildCmdHasBeenSet(false),
    m_installCmdHasBeenSet(false),
    m_frameworkHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_repoUrlHasBeenSet(false),
    m_repoOwnerHasBeenSet(false),
    m_repoNameHasBeenSet(false),
    m_repoBranchHasBeenSet(false),
    m_envVarsHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_codingProjectIdHasBeenSet(false)
{
}

string CreateProjectRequest::ToJsonString() const
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

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_channelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Channel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channel.c_str(), allocator).Move(), allocator);
    }

    if (m_providerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Provider";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_provider.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeJsVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeJsVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nodeJsVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_rootDirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RootDir";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_rootDir.c_str(), allocator).Move(), allocator);
    }

    if (m_outputDirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputDir";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outputDir.c_str(), allocator).Move(), allocator);
    }

    if (m_buildCmdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuildCmd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_buildCmd.c_str(), allocator).Move(), allocator);
    }

    if (m_installCmdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstallCmd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_installCmd.c_str(), allocator).Move(), allocator);
    }

    if (m_frameworkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Framework";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_framework.c_str(), allocator).Move(), allocator);
    }

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_repoUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepoUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_repoUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_repoOwnerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepoOwner";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_repoOwner.c_str(), allocator).Move(), allocator);
    }

    if (m_repoNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepoName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_repoName.c_str(), allocator).Move(), allocator);
    }

    if (m_repoBranchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepoBranch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_repoBranch.c_str(), allocator).Move(), allocator);
    }

    if (m_envVarsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvVars";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_envVars.begin(); itr != m_envVars.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_codingProjectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodingProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_codingProjectId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateProjectRequest::GetZoneId() const
{
    return m_zoneId;
}

void CreateProjectRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool CreateProjectRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string CreateProjectRequest::GetName() const
{
    return m_name;
}

void CreateProjectRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateProjectRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateProjectRequest::GetChannel() const
{
    return m_channel;
}

void CreateProjectRequest::SetChannel(const string& _channel)
{
    m_channel = _channel;
    m_channelHasBeenSet = true;
}

bool CreateProjectRequest::ChannelHasBeenSet() const
{
    return m_channelHasBeenSet;
}

string CreateProjectRequest::GetProvider() const
{
    return m_provider;
}

void CreateProjectRequest::SetProvider(const string& _provider)
{
    m_provider = _provider;
    m_providerHasBeenSet = true;
}

bool CreateProjectRequest::ProviderHasBeenSet() const
{
    return m_providerHasBeenSet;
}

string CreateProjectRequest::GetSource() const
{
    return m_source;
}

void CreateProjectRequest::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool CreateProjectRequest::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string CreateProjectRequest::GetArea() const
{
    return m_area;
}

void CreateProjectRequest::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool CreateProjectRequest::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

string CreateProjectRequest::GetNodeJsVersion() const
{
    return m_nodeJsVersion;
}

void CreateProjectRequest::SetNodeJsVersion(const string& _nodeJsVersion)
{
    m_nodeJsVersion = _nodeJsVersion;
    m_nodeJsVersionHasBeenSet = true;
}

bool CreateProjectRequest::NodeJsVersionHasBeenSet() const
{
    return m_nodeJsVersionHasBeenSet;
}

string CreateProjectRequest::GetRootDir() const
{
    return m_rootDir;
}

void CreateProjectRequest::SetRootDir(const string& _rootDir)
{
    m_rootDir = _rootDir;
    m_rootDirHasBeenSet = true;
}

bool CreateProjectRequest::RootDirHasBeenSet() const
{
    return m_rootDirHasBeenSet;
}

string CreateProjectRequest::GetOutputDir() const
{
    return m_outputDir;
}

void CreateProjectRequest::SetOutputDir(const string& _outputDir)
{
    m_outputDir = _outputDir;
    m_outputDirHasBeenSet = true;
}

bool CreateProjectRequest::OutputDirHasBeenSet() const
{
    return m_outputDirHasBeenSet;
}

string CreateProjectRequest::GetBuildCmd() const
{
    return m_buildCmd;
}

void CreateProjectRequest::SetBuildCmd(const string& _buildCmd)
{
    m_buildCmd = _buildCmd;
    m_buildCmdHasBeenSet = true;
}

bool CreateProjectRequest::BuildCmdHasBeenSet() const
{
    return m_buildCmdHasBeenSet;
}

string CreateProjectRequest::GetInstallCmd() const
{
    return m_installCmd;
}

void CreateProjectRequest::SetInstallCmd(const string& _installCmd)
{
    m_installCmd = _installCmd;
    m_installCmdHasBeenSet = true;
}

bool CreateProjectRequest::InstallCmdHasBeenSet() const
{
    return m_installCmdHasBeenSet;
}

string CreateProjectRequest::GetFramework() const
{
    return m_framework;
}

void CreateProjectRequest::SetFramework(const string& _framework)
{
    m_framework = _framework;
    m_frameworkHasBeenSet = true;
}

bool CreateProjectRequest::FrameworkHasBeenSet() const
{
    return m_frameworkHasBeenSet;
}

string CreateProjectRequest::GetTemplateId() const
{
    return m_templateId;
}

void CreateProjectRequest::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool CreateProjectRequest::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string CreateProjectRequest::GetRepoUrl() const
{
    return m_repoUrl;
}

void CreateProjectRequest::SetRepoUrl(const string& _repoUrl)
{
    m_repoUrl = _repoUrl;
    m_repoUrlHasBeenSet = true;
}

bool CreateProjectRequest::RepoUrlHasBeenSet() const
{
    return m_repoUrlHasBeenSet;
}

string CreateProjectRequest::GetRepoOwner() const
{
    return m_repoOwner;
}

void CreateProjectRequest::SetRepoOwner(const string& _repoOwner)
{
    m_repoOwner = _repoOwner;
    m_repoOwnerHasBeenSet = true;
}

bool CreateProjectRequest::RepoOwnerHasBeenSet() const
{
    return m_repoOwnerHasBeenSet;
}

string CreateProjectRequest::GetRepoName() const
{
    return m_repoName;
}

void CreateProjectRequest::SetRepoName(const string& _repoName)
{
    m_repoName = _repoName;
    m_repoNameHasBeenSet = true;
}

bool CreateProjectRequest::RepoNameHasBeenSet() const
{
    return m_repoNameHasBeenSet;
}

string CreateProjectRequest::GetRepoBranch() const
{
    return m_repoBranch;
}

void CreateProjectRequest::SetRepoBranch(const string& _repoBranch)
{
    m_repoBranch = _repoBranch;
    m_repoBranchHasBeenSet = true;
}

bool CreateProjectRequest::RepoBranchHasBeenSet() const
{
    return m_repoBranchHasBeenSet;
}

vector<EnvVar> CreateProjectRequest::GetEnvVars() const
{
    return m_envVars;
}

void CreateProjectRequest::SetEnvVars(const vector<EnvVar>& _envVars)
{
    m_envVars = _envVars;
    m_envVarsHasBeenSet = true;
}

bool CreateProjectRequest::EnvVarsHasBeenSet() const
{
    return m_envVarsHasBeenSet;
}

string CreateProjectRequest::GetNamespace() const
{
    return m_namespace;
}

void CreateProjectRequest::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool CreateProjectRequest::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

int64_t CreateProjectRequest::GetCodingProjectId() const
{
    return m_codingProjectId;
}

void CreateProjectRequest::SetCodingProjectId(const int64_t& _codingProjectId)
{
    m_codingProjectId = _codingProjectId;
    m_codingProjectIdHasBeenSet = true;
}

bool CreateProjectRequest::CodingProjectIdHasBeenSet() const
{
    return m_codingProjectIdHasBeenSet;
}



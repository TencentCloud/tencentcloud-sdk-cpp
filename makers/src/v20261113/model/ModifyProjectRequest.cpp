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

#include <tencentcloud/makers/v20261113/model/ModifyProjectRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Makers::V20261113::Model;
using namespace std;

ModifyProjectRequest::ModifyProjectRequest() :
    m_zoneIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_rootDirHasBeenSet(false),
    m_outputDirHasBeenSet(false),
    m_buildCmdHasBeenSet(false),
    m_installCmdHasBeenSet(false),
    m_frameworkHasBeenSet(false),
    m_coverUrlHasBeenSet(false),
    m_nodeJsVersionHasBeenSet(false)
{
}

string ModifyProjectRequest::ToJsonString() const
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

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
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

    if (m_coverUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoverUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_coverUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeJsVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeJsVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nodeJsVersion.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyProjectRequest::GetZoneId() const
{
    return m_zoneId;
}

void ModifyProjectRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ModifyProjectRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string ModifyProjectRequest::GetProjectId() const
{
    return m_projectId;
}

void ModifyProjectRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ModifyProjectRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ModifyProjectRequest::GetName() const
{
    return m_name;
}

void ModifyProjectRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyProjectRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyProjectRequest::GetRootDir() const
{
    return m_rootDir;
}

void ModifyProjectRequest::SetRootDir(const string& _rootDir)
{
    m_rootDir = _rootDir;
    m_rootDirHasBeenSet = true;
}

bool ModifyProjectRequest::RootDirHasBeenSet() const
{
    return m_rootDirHasBeenSet;
}

string ModifyProjectRequest::GetOutputDir() const
{
    return m_outputDir;
}

void ModifyProjectRequest::SetOutputDir(const string& _outputDir)
{
    m_outputDir = _outputDir;
    m_outputDirHasBeenSet = true;
}

bool ModifyProjectRequest::OutputDirHasBeenSet() const
{
    return m_outputDirHasBeenSet;
}

string ModifyProjectRequest::GetBuildCmd() const
{
    return m_buildCmd;
}

void ModifyProjectRequest::SetBuildCmd(const string& _buildCmd)
{
    m_buildCmd = _buildCmd;
    m_buildCmdHasBeenSet = true;
}

bool ModifyProjectRequest::BuildCmdHasBeenSet() const
{
    return m_buildCmdHasBeenSet;
}

string ModifyProjectRequest::GetInstallCmd() const
{
    return m_installCmd;
}

void ModifyProjectRequest::SetInstallCmd(const string& _installCmd)
{
    m_installCmd = _installCmd;
    m_installCmdHasBeenSet = true;
}

bool ModifyProjectRequest::InstallCmdHasBeenSet() const
{
    return m_installCmdHasBeenSet;
}

string ModifyProjectRequest::GetFramework() const
{
    return m_framework;
}

void ModifyProjectRequest::SetFramework(const string& _framework)
{
    m_framework = _framework;
    m_frameworkHasBeenSet = true;
}

bool ModifyProjectRequest::FrameworkHasBeenSet() const
{
    return m_frameworkHasBeenSet;
}

string ModifyProjectRequest::GetCoverUrl() const
{
    return m_coverUrl;
}

void ModifyProjectRequest::SetCoverUrl(const string& _coverUrl)
{
    m_coverUrl = _coverUrl;
    m_coverUrlHasBeenSet = true;
}

bool ModifyProjectRequest::CoverUrlHasBeenSet() const
{
    return m_coverUrlHasBeenSet;
}

string ModifyProjectRequest::GetNodeJsVersion() const
{
    return m_nodeJsVersion;
}

void ModifyProjectRequest::SetNodeJsVersion(const string& _nodeJsVersion)
{
    m_nodeJsVersion = _nodeJsVersion;
    m_nodeJsVersionHasBeenSet = true;
}

bool ModifyProjectRequest::NodeJsVersionHasBeenSet() const
{
    return m_nodeJsVersionHasBeenSet;
}



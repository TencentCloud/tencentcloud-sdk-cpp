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

#include <tencentcloud/tcb/v20180608/model/StaticConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

StaticConfig::StaticConfig() :
    m_frameworkHasBeenSet(false),
    m_nodeJsVersionHasBeenSet(false),
    m_appPathHasBeenSet(false),
    m_buildPathHasBeenSet(false),
    m_zipFileUrlHasBeenSet(false),
    m_cosTimestampHasBeenSet(false),
    m_cosSuffixHasBeenSet(false),
    m_codeSourceHasBeenSet(false),
    m_codeRepoHasBeenSet(false),
    m_codeBranchHasBeenSet(false),
    m_staticCmdHasBeenSet(false),
    m_staticEnvHasBeenSet(false)
{
}

CoreInternalOutcome StaticConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Framework") && !value["Framework"].IsNull())
    {
        if (!value["Framework"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StaticConfig.Framework` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_framework = string(value["Framework"].GetString());
        m_frameworkHasBeenSet = true;
    }

    if (value.HasMember("NodeJsVersion") && !value["NodeJsVersion"].IsNull())
    {
        if (!value["NodeJsVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StaticConfig.NodeJsVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeJsVersion = string(value["NodeJsVersion"].GetString());
        m_nodeJsVersionHasBeenSet = true;
    }

    if (value.HasMember("AppPath") && !value["AppPath"].IsNull())
    {
        if (!value["AppPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StaticConfig.AppPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appPath = string(value["AppPath"].GetString());
        m_appPathHasBeenSet = true;
    }

    if (value.HasMember("BuildPath") && !value["BuildPath"].IsNull())
    {
        if (!value["BuildPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StaticConfig.BuildPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buildPath = string(value["BuildPath"].GetString());
        m_buildPathHasBeenSet = true;
    }

    if (value.HasMember("ZipFileUrl") && !value["ZipFileUrl"].IsNull())
    {
        if (!value["ZipFileUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StaticConfig.ZipFileUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zipFileUrl = string(value["ZipFileUrl"].GetString());
        m_zipFileUrlHasBeenSet = true;
    }

    if (value.HasMember("CosTimestamp") && !value["CosTimestamp"].IsNull())
    {
        if (!value["CosTimestamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StaticConfig.CosTimestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosTimestamp = string(value["CosTimestamp"].GetString());
        m_cosTimestampHasBeenSet = true;
    }

    if (value.HasMember("CosSuffix") && !value["CosSuffix"].IsNull())
    {
        if (!value["CosSuffix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StaticConfig.CosSuffix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosSuffix = string(value["CosSuffix"].GetString());
        m_cosSuffixHasBeenSet = true;
    }

    if (value.HasMember("CodeSource") && !value["CodeSource"].IsNull())
    {
        if (!value["CodeSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StaticConfig.CodeSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codeSource = string(value["CodeSource"].GetString());
        m_codeSourceHasBeenSet = true;
    }

    if (value.HasMember("CodeRepo") && !value["CodeRepo"].IsNull())
    {
        if (!value["CodeRepo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StaticConfig.CodeRepo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codeRepo = string(value["CodeRepo"].GetString());
        m_codeRepoHasBeenSet = true;
    }

    if (value.HasMember("CodeBranch") && !value["CodeBranch"].IsNull())
    {
        if (!value["CodeBranch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StaticConfig.CodeBranch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codeBranch = string(value["CodeBranch"].GetString());
        m_codeBranchHasBeenSet = true;
    }

    if (value.HasMember("StaticCmd") && !value["StaticCmd"].IsNull())
    {
        if (!value["StaticCmd"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `StaticConfig.StaticCmd` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_staticCmd.Deserialize(value["StaticCmd"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_staticCmdHasBeenSet = true;
    }

    if (value.HasMember("StaticEnv") && !value["StaticEnv"].IsNull())
    {
        if (!value["StaticEnv"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `StaticConfig.StaticEnv` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_staticEnv.Deserialize(value["StaticEnv"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_staticEnvHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StaticConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_frameworkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Framework";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_framework.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeJsVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeJsVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeJsVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_appPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appPath.c_str(), allocator).Move(), allocator);
    }

    if (m_buildPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuildPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buildPath.c_str(), allocator).Move(), allocator);
    }

    if (m_zipFileUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZipFileUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zipFileUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_cosTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosTimestamp.c_str(), allocator).Move(), allocator);
    }

    if (m_cosSuffixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosSuffix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosSuffix.c_str(), allocator).Move(), allocator);
    }

    if (m_codeSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codeSource.c_str(), allocator).Move(), allocator);
    }

    if (m_codeRepoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeRepo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codeRepo.c_str(), allocator).Move(), allocator);
    }

    if (m_codeBranchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeBranch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codeBranch.c_str(), allocator).Move(), allocator);
    }

    if (m_staticCmdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StaticCmd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_staticCmd.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_staticEnvHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StaticEnv";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_staticEnv.ToJsonObject(value[key.c_str()], allocator);
    }

}


string StaticConfig::GetFramework() const
{
    return m_framework;
}

void StaticConfig::SetFramework(const string& _framework)
{
    m_framework = _framework;
    m_frameworkHasBeenSet = true;
}

bool StaticConfig::FrameworkHasBeenSet() const
{
    return m_frameworkHasBeenSet;
}

string StaticConfig::GetNodeJsVersion() const
{
    return m_nodeJsVersion;
}

void StaticConfig::SetNodeJsVersion(const string& _nodeJsVersion)
{
    m_nodeJsVersion = _nodeJsVersion;
    m_nodeJsVersionHasBeenSet = true;
}

bool StaticConfig::NodeJsVersionHasBeenSet() const
{
    return m_nodeJsVersionHasBeenSet;
}

string StaticConfig::GetAppPath() const
{
    return m_appPath;
}

void StaticConfig::SetAppPath(const string& _appPath)
{
    m_appPath = _appPath;
    m_appPathHasBeenSet = true;
}

bool StaticConfig::AppPathHasBeenSet() const
{
    return m_appPathHasBeenSet;
}

string StaticConfig::GetBuildPath() const
{
    return m_buildPath;
}

void StaticConfig::SetBuildPath(const string& _buildPath)
{
    m_buildPath = _buildPath;
    m_buildPathHasBeenSet = true;
}

bool StaticConfig::BuildPathHasBeenSet() const
{
    return m_buildPathHasBeenSet;
}

string StaticConfig::GetZipFileUrl() const
{
    return m_zipFileUrl;
}

void StaticConfig::SetZipFileUrl(const string& _zipFileUrl)
{
    m_zipFileUrl = _zipFileUrl;
    m_zipFileUrlHasBeenSet = true;
}

bool StaticConfig::ZipFileUrlHasBeenSet() const
{
    return m_zipFileUrlHasBeenSet;
}

string StaticConfig::GetCosTimestamp() const
{
    return m_cosTimestamp;
}

void StaticConfig::SetCosTimestamp(const string& _cosTimestamp)
{
    m_cosTimestamp = _cosTimestamp;
    m_cosTimestampHasBeenSet = true;
}

bool StaticConfig::CosTimestampHasBeenSet() const
{
    return m_cosTimestampHasBeenSet;
}

string StaticConfig::GetCosSuffix() const
{
    return m_cosSuffix;
}

void StaticConfig::SetCosSuffix(const string& _cosSuffix)
{
    m_cosSuffix = _cosSuffix;
    m_cosSuffixHasBeenSet = true;
}

bool StaticConfig::CosSuffixHasBeenSet() const
{
    return m_cosSuffixHasBeenSet;
}

string StaticConfig::GetCodeSource() const
{
    return m_codeSource;
}

void StaticConfig::SetCodeSource(const string& _codeSource)
{
    m_codeSource = _codeSource;
    m_codeSourceHasBeenSet = true;
}

bool StaticConfig::CodeSourceHasBeenSet() const
{
    return m_codeSourceHasBeenSet;
}

string StaticConfig::GetCodeRepo() const
{
    return m_codeRepo;
}

void StaticConfig::SetCodeRepo(const string& _codeRepo)
{
    m_codeRepo = _codeRepo;
    m_codeRepoHasBeenSet = true;
}

bool StaticConfig::CodeRepoHasBeenSet() const
{
    return m_codeRepoHasBeenSet;
}

string StaticConfig::GetCodeBranch() const
{
    return m_codeBranch;
}

void StaticConfig::SetCodeBranch(const string& _codeBranch)
{
    m_codeBranch = _codeBranch;
    m_codeBranchHasBeenSet = true;
}

bool StaticConfig::CodeBranchHasBeenSet() const
{
    return m_codeBranchHasBeenSet;
}

StaticCmd StaticConfig::GetStaticCmd() const
{
    return m_staticCmd;
}

void StaticConfig::SetStaticCmd(const StaticCmd& _staticCmd)
{
    m_staticCmd = _staticCmd;
    m_staticCmdHasBeenSet = true;
}

bool StaticConfig::StaticCmdHasBeenSet() const
{
    return m_staticCmdHasBeenSet;
}

StaticEnvironment StaticConfig::GetStaticEnv() const
{
    return m_staticEnv;
}

void StaticConfig::SetStaticEnv(const StaticEnvironment& _staticEnv)
{
    m_staticEnv = _staticEnv;
    m_staticEnvHasBeenSet = true;
}

bool StaticConfig::StaticEnvHasBeenSet() const
{
    return m_staticEnvHasBeenSet;
}


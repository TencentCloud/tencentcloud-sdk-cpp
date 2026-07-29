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

#include <tencentcloud/tcb/v20180608/model/BuildCommands.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

BuildCommands::BuildCommands() :
    m_installCmdHasBeenSet(false),
    m_buildCmdHasBeenSet(false),
    m_deployCmdHasBeenSet(false)
{
}

CoreInternalOutcome BuildCommands::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstallCmd") && !value["InstallCmd"].IsNull())
    {
        if (!value["InstallCmd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BuildCommands.InstallCmd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_installCmd = string(value["InstallCmd"].GetString());
        m_installCmdHasBeenSet = true;
    }

    if (value.HasMember("BuildCmd") && !value["BuildCmd"].IsNull())
    {
        if (!value["BuildCmd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BuildCommands.BuildCmd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buildCmd = string(value["BuildCmd"].GetString());
        m_buildCmdHasBeenSet = true;
    }

    if (value.HasMember("DeployCmd") && !value["DeployCmd"].IsNull())
    {
        if (!value["DeployCmd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BuildCommands.DeployCmd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deployCmd = string(value["DeployCmd"].GetString());
        m_deployCmdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BuildCommands::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_installCmdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstallCmd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_installCmd.c_str(), allocator).Move(), allocator);
    }

    if (m_buildCmdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuildCmd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buildCmd.c_str(), allocator).Move(), allocator);
    }

    if (m_deployCmdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployCmd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deployCmd.c_str(), allocator).Move(), allocator);
    }

}


string BuildCommands::GetInstallCmd() const
{
    return m_installCmd;
}

void BuildCommands::SetInstallCmd(const string& _installCmd)
{
    m_installCmd = _installCmd;
    m_installCmdHasBeenSet = true;
}

bool BuildCommands::InstallCmdHasBeenSet() const
{
    return m_installCmdHasBeenSet;
}

string BuildCommands::GetBuildCmd() const
{
    return m_buildCmd;
}

void BuildCommands::SetBuildCmd(const string& _buildCmd)
{
    m_buildCmd = _buildCmd;
    m_buildCmdHasBeenSet = true;
}

bool BuildCommands::BuildCmdHasBeenSet() const
{
    return m_buildCmdHasBeenSet;
}

string BuildCommands::GetDeployCmd() const
{
    return m_deployCmd;
}

void BuildCommands::SetDeployCmd(const string& _deployCmd)
{
    m_deployCmd = _deployCmd;
    m_deployCmdHasBeenSet = true;
}

bool BuildCommands::DeployCmdHasBeenSet() const
{
    return m_deployCmdHasBeenSet;
}


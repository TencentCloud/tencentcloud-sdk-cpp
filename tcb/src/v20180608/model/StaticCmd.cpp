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

#include <tencentcloud/tcb/v20180608/model/StaticCmd.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

StaticCmd::StaticCmd() :
    m_buildCmdHasBeenSet(false),
    m_installCmdHasBeenSet(false),
    m_deployCmdHasBeenSet(false)
{
}

CoreInternalOutcome StaticCmd::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BuildCmd") && !value["BuildCmd"].IsNull())
    {
        if (!value["BuildCmd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StaticCmd.BuildCmd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buildCmd = string(value["BuildCmd"].GetString());
        m_buildCmdHasBeenSet = true;
    }

    if (value.HasMember("InstallCmd") && !value["InstallCmd"].IsNull())
    {
        if (!value["InstallCmd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StaticCmd.InstallCmd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_installCmd = string(value["InstallCmd"].GetString());
        m_installCmdHasBeenSet = true;
    }

    if (value.HasMember("DeployCmd") && !value["DeployCmd"].IsNull())
    {
        if (!value["DeployCmd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StaticCmd.DeployCmd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deployCmd = string(value["DeployCmd"].GetString());
        m_deployCmdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StaticCmd::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_deployCmdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployCmd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deployCmd.c_str(), allocator).Move(), allocator);
    }

}


string StaticCmd::GetBuildCmd() const
{
    return m_buildCmd;
}

void StaticCmd::SetBuildCmd(const string& _buildCmd)
{
    m_buildCmd = _buildCmd;
    m_buildCmdHasBeenSet = true;
}

bool StaticCmd::BuildCmdHasBeenSet() const
{
    return m_buildCmdHasBeenSet;
}

string StaticCmd::GetInstallCmd() const
{
    return m_installCmd;
}

void StaticCmd::SetInstallCmd(const string& _installCmd)
{
    m_installCmd = _installCmd;
    m_installCmdHasBeenSet = true;
}

bool StaticCmd::InstallCmdHasBeenSet() const
{
    return m_installCmdHasBeenSet;
}

string StaticCmd::GetDeployCmd() const
{
    return m_deployCmd;
}

void StaticCmd::SetDeployCmd(const string& _deployCmd)
{
    m_deployCmd = _deployCmd;
    m_deployCmdHasBeenSet = true;
}

bool StaticCmd::DeployCmdHasBeenSet() const
{
    return m_deployCmdHasBeenSet;
}


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

#include <tencentcloud/monitor/v20180724/model/ManagementCommand.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

ManagementCommand::ManagementCommand() :
    m_installHasBeenSet(false),
    m_restartHasBeenSet(false),
    m_stopHasBeenSet(false),
    m_statusCheckHasBeenSet(false),
    m_logCheckHasBeenSet(false)
{
}

CoreInternalOutcome ManagementCommand::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Install") && !value["Install"].IsNull())
    {
        if (!value["Install"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManagementCommand.Install` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_install = string(value["Install"].GetString());
        m_installHasBeenSet = true;
    }

    if (value.HasMember("Restart") && !value["Restart"].IsNull())
    {
        if (!value["Restart"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManagementCommand.Restart` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_restart = string(value["Restart"].GetString());
        m_restartHasBeenSet = true;
    }

    if (value.HasMember("Stop") && !value["Stop"].IsNull())
    {
        if (!value["Stop"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManagementCommand.Stop` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stop = string(value["Stop"].GetString());
        m_stopHasBeenSet = true;
    }

    if (value.HasMember("StatusCheck") && !value["StatusCheck"].IsNull())
    {
        if (!value["StatusCheck"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManagementCommand.StatusCheck` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusCheck = string(value["StatusCheck"].GetString());
        m_statusCheckHasBeenSet = true;
    }

    if (value.HasMember("LogCheck") && !value["LogCheck"].IsNull())
    {
        if (!value["LogCheck"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManagementCommand.LogCheck` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logCheck = string(value["LogCheck"].GetString());
        m_logCheckHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ManagementCommand::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_installHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Install";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_install.c_str(), allocator).Move(), allocator);
    }

    if (m_restartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Restart";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_restart.c_str(), allocator).Move(), allocator);
    }

    if (m_stopHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Stop";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stop.c_str(), allocator).Move(), allocator);
    }

    if (m_statusCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusCheck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusCheck.c_str(), allocator).Move(), allocator);
    }

    if (m_logCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogCheck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logCheck.c_str(), allocator).Move(), allocator);
    }

}


string ManagementCommand::GetInstall() const
{
    return m_install;
}

void ManagementCommand::SetInstall(const string& _install)
{
    m_install = _install;
    m_installHasBeenSet = true;
}

bool ManagementCommand::InstallHasBeenSet() const
{
    return m_installHasBeenSet;
}

string ManagementCommand::GetRestart() const
{
    return m_restart;
}

void ManagementCommand::SetRestart(const string& _restart)
{
    m_restart = _restart;
    m_restartHasBeenSet = true;
}

bool ManagementCommand::RestartHasBeenSet() const
{
    return m_restartHasBeenSet;
}

string ManagementCommand::GetStop() const
{
    return m_stop;
}

void ManagementCommand::SetStop(const string& _stop)
{
    m_stop = _stop;
    m_stopHasBeenSet = true;
}

bool ManagementCommand::StopHasBeenSet() const
{
    return m_stopHasBeenSet;
}

string ManagementCommand::GetStatusCheck() const
{
    return m_statusCheck;
}

void ManagementCommand::SetStatusCheck(const string& _statusCheck)
{
    m_statusCheck = _statusCheck;
    m_statusCheckHasBeenSet = true;
}

bool ManagementCommand::StatusCheckHasBeenSet() const
{
    return m_statusCheckHasBeenSet;
}

string ManagementCommand::GetLogCheck() const
{
    return m_logCheck;
}

void ManagementCommand::SetLogCheck(const string& _logCheck)
{
    m_logCheck = _logCheck;
    m_logCheckHasBeenSet = true;
}

bool ManagementCommand::LogCheckHasBeenSet() const
{
    return m_logCheckHasBeenSet;
}


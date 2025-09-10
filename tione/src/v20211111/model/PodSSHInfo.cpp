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

#include <tencentcloud/tione/v20211111/model/PodSSHInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

PodSSHInfo::PodSSHInfo() :
    m_hostHasBeenSet(false),
    m_portHasBeenSet(false),
    m_loginCommandHasBeenSet(false)
{
}

CoreInternalOutcome PodSSHInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Host") && !value["Host"].IsNull())
    {
        if (!value["Host"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PodSSHInfo.Host` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_host = string(value["Host"].GetString());
        m_hostHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PodSSHInfo.Port` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetInt64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("LoginCommand") && !value["LoginCommand"].IsNull())
    {
        if (!value["LoginCommand"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PodSSHInfo.LoginCommand` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loginCommand = string(value["LoginCommand"].GetString());
        m_loginCommandHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PodSSHInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_loginCommandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginCommand";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loginCommand.c_str(), allocator).Move(), allocator);
    }

}


string PodSSHInfo::GetHost() const
{
    return m_host;
}

void PodSSHInfo::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool PodSSHInfo::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

int64_t PodSSHInfo::GetPort() const
{
    return m_port;
}

void PodSSHInfo::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool PodSSHInfo::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string PodSSHInfo::GetLoginCommand() const
{
    return m_loginCommand;
}

void PodSSHInfo::SetLoginCommand(const string& _loginCommand)
{
    m_loginCommand = _loginCommand;
    m_loginCommandHasBeenSet = true;
}

bool PodSSHInfo::LoginCommandHasBeenSet() const
{
    return m_loginCommandHasBeenSet;
}


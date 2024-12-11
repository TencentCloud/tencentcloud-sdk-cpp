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

#include <tencentcloud/tione/v20211111/model/SSHConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

SSHConfig::SSHConfig() :
    m_enableHasBeenSet(false),
    m_publicKeyHasBeenSet(false),
    m_portHasBeenSet(false),
    m_loginCommandHasBeenSet(false),
    m_isAddressChangedHasBeenSet(false)
{
}

CoreInternalOutcome SSHConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SSHConfig.Enable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetBool();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("PublicKey") && !value["PublicKey"].IsNull())
    {
        if (!value["PublicKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SSHConfig.PublicKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicKey = string(value["PublicKey"].GetString());
        m_publicKeyHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SSHConfig.Port` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetInt64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("LoginCommand") && !value["LoginCommand"].IsNull())
    {
        if (!value["LoginCommand"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SSHConfig.LoginCommand` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loginCommand = string(value["LoginCommand"].GetString());
        m_loginCommandHasBeenSet = true;
    }

    if (value.HasMember("IsAddressChanged") && !value["IsAddressChanged"].IsNull())
    {
        if (!value["IsAddressChanged"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SSHConfig.IsAddressChanged` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAddressChanged = value["IsAddressChanged"].GetBool();
        m_isAddressChangedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SSHConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_publicKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicKey.c_str(), allocator).Move(), allocator);
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

    if (m_isAddressChangedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAddressChanged";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAddressChanged, allocator);
    }

}


bool SSHConfig::GetEnable() const
{
    return m_enable;
}

void SSHConfig::SetEnable(const bool& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool SSHConfig::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

string SSHConfig::GetPublicKey() const
{
    return m_publicKey;
}

void SSHConfig::SetPublicKey(const string& _publicKey)
{
    m_publicKey = _publicKey;
    m_publicKeyHasBeenSet = true;
}

bool SSHConfig::PublicKeyHasBeenSet() const
{
    return m_publicKeyHasBeenSet;
}

int64_t SSHConfig::GetPort() const
{
    return m_port;
}

void SSHConfig::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool SSHConfig::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string SSHConfig::GetLoginCommand() const
{
    return m_loginCommand;
}

void SSHConfig::SetLoginCommand(const string& _loginCommand)
{
    m_loginCommand = _loginCommand;
    m_loginCommandHasBeenSet = true;
}

bool SSHConfig::LoginCommandHasBeenSet() const
{
    return m_loginCommandHasBeenSet;
}

bool SSHConfig::GetIsAddressChanged() const
{
    return m_isAddressChanged;
}

void SSHConfig::SetIsAddressChanged(const bool& _isAddressChanged)
{
    m_isAddressChanged = _isAddressChanged;
    m_isAddressChangedHasBeenSet = true;
}

bool SSHConfig::IsAddressChangedHasBeenSet() const
{
    return m_isAddressChangedHasBeenSet;
}


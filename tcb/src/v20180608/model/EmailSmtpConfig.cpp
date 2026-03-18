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

#include <tencentcloud/tcb/v20180608/model/EmailSmtpConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

EmailSmtpConfig::EmailSmtpConfig() :
    m_senderAddressHasBeenSet(false),
    m_serverHostHasBeenSet(false),
    m_serverPortHasBeenSet(false),
    m_accountUsernameHasBeenSet(false),
    m_accountPasswordHasBeenSet(false),
    m_securityModeHasBeenSet(false)
{
}

CoreInternalOutcome EmailSmtpConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SenderAddress") && !value["SenderAddress"].IsNull())
    {
        if (!value["SenderAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmailSmtpConfig.SenderAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_senderAddress = string(value["SenderAddress"].GetString());
        m_senderAddressHasBeenSet = true;
    }

    if (value.HasMember("ServerHost") && !value["ServerHost"].IsNull())
    {
        if (!value["ServerHost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmailSmtpConfig.ServerHost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serverHost = string(value["ServerHost"].GetString());
        m_serverHostHasBeenSet = true;
    }

    if (value.HasMember("ServerPort") && !value["ServerPort"].IsNull())
    {
        if (!value["ServerPort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EmailSmtpConfig.ServerPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_serverPort = value["ServerPort"].GetUint64();
        m_serverPortHasBeenSet = true;
    }

    if (value.HasMember("AccountUsername") && !value["AccountUsername"].IsNull())
    {
        if (!value["AccountUsername"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmailSmtpConfig.AccountUsername` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountUsername = string(value["AccountUsername"].GetString());
        m_accountUsernameHasBeenSet = true;
    }

    if (value.HasMember("AccountPassword") && !value["AccountPassword"].IsNull())
    {
        if (!value["AccountPassword"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmailSmtpConfig.AccountPassword` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountPassword = string(value["AccountPassword"].GetString());
        m_accountPasswordHasBeenSet = true;
    }

    if (value.HasMember("SecurityMode") && !value["SecurityMode"].IsNull())
    {
        if (!value["SecurityMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmailSmtpConfig.SecurityMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_securityMode = string(value["SecurityMode"].GetString());
        m_securityModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EmailSmtpConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_senderAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SenderAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_senderAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_serverHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerHost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serverHost.c_str(), allocator).Move(), allocator);
    }

    if (m_serverPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_serverPort, allocator);
    }

    if (m_accountUsernameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountUsername";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountUsername.c_str(), allocator).Move(), allocator);
    }

    if (m_accountPasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountPassword";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountPassword.c_str(), allocator).Move(), allocator);
    }

    if (m_securityModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_securityMode.c_str(), allocator).Move(), allocator);
    }

}


string EmailSmtpConfig::GetSenderAddress() const
{
    return m_senderAddress;
}

void EmailSmtpConfig::SetSenderAddress(const string& _senderAddress)
{
    m_senderAddress = _senderAddress;
    m_senderAddressHasBeenSet = true;
}

bool EmailSmtpConfig::SenderAddressHasBeenSet() const
{
    return m_senderAddressHasBeenSet;
}

string EmailSmtpConfig::GetServerHost() const
{
    return m_serverHost;
}

void EmailSmtpConfig::SetServerHost(const string& _serverHost)
{
    m_serverHost = _serverHost;
    m_serverHostHasBeenSet = true;
}

bool EmailSmtpConfig::ServerHostHasBeenSet() const
{
    return m_serverHostHasBeenSet;
}

uint64_t EmailSmtpConfig::GetServerPort() const
{
    return m_serverPort;
}

void EmailSmtpConfig::SetServerPort(const uint64_t& _serverPort)
{
    m_serverPort = _serverPort;
    m_serverPortHasBeenSet = true;
}

bool EmailSmtpConfig::ServerPortHasBeenSet() const
{
    return m_serverPortHasBeenSet;
}

string EmailSmtpConfig::GetAccountUsername() const
{
    return m_accountUsername;
}

void EmailSmtpConfig::SetAccountUsername(const string& _accountUsername)
{
    m_accountUsername = _accountUsername;
    m_accountUsernameHasBeenSet = true;
}

bool EmailSmtpConfig::AccountUsernameHasBeenSet() const
{
    return m_accountUsernameHasBeenSet;
}

string EmailSmtpConfig::GetAccountPassword() const
{
    return m_accountPassword;
}

void EmailSmtpConfig::SetAccountPassword(const string& _accountPassword)
{
    m_accountPassword = _accountPassword;
    m_accountPasswordHasBeenSet = true;
}

bool EmailSmtpConfig::AccountPasswordHasBeenSet() const
{
    return m_accountPasswordHasBeenSet;
}

string EmailSmtpConfig::GetSecurityMode() const
{
    return m_securityMode;
}

void EmailSmtpConfig::SetSecurityMode(const string& _securityMode)
{
    m_securityMode = _securityMode;
    m_securityModeHasBeenSet = true;
}

bool EmailSmtpConfig::SecurityModeHasBeenSet() const
{
    return m_securityModeHasBeenSet;
}


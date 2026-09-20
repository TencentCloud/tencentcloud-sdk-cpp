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

#include <tencentcloud/cls/v20201016/model/KafkaProtocolInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

KafkaProtocolInfo::KafkaProtocolInfo() :
    m_protocolHasBeenSet(false),
    m_mechanismHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_enableClientCertificateHasBeenSet(false),
    m_enableServerCertificateHasBeenSet(false),
    m_cACertificateIdHasBeenSet(false),
    m_sVRCertificateIdHasBeenSet(false)
{
}

CoreInternalOutcome KafkaProtocolInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaProtocolInfo.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Mechanism") && !value["Mechanism"].IsNull())
    {
        if (!value["Mechanism"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaProtocolInfo.Mechanism` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mechanism = string(value["Mechanism"].GetString());
        m_mechanismHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaProtocolInfo.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaProtocolInfo.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }

    if (value.HasMember("EnableClientCertificate") && !value["EnableClientCertificate"].IsNull())
    {
        if (!value["EnableClientCertificate"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaProtocolInfo.EnableClientCertificate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_enableClientCertificate = value["EnableClientCertificate"].GetUint64();
        m_enableClientCertificateHasBeenSet = true;
    }

    if (value.HasMember("EnableServerCertificate") && !value["EnableServerCertificate"].IsNull())
    {
        if (!value["EnableServerCertificate"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaProtocolInfo.EnableServerCertificate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_enableServerCertificate = value["EnableServerCertificate"].GetUint64();
        m_enableServerCertificateHasBeenSet = true;
    }

    if (value.HasMember("CACertificateId") && !value["CACertificateId"].IsNull())
    {
        if (!value["CACertificateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaProtocolInfo.CACertificateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cACertificateId = string(value["CACertificateId"].GetString());
        m_cACertificateIdHasBeenSet = true;
    }

    if (value.HasMember("SVRCertificateId") && !value["SVRCertificateId"].IsNull())
    {
        if (!value["SVRCertificateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaProtocolInfo.SVRCertificateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sVRCertificateId = string(value["SVRCertificateId"].GetString());
        m_sVRCertificateIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KafkaProtocolInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_mechanismHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mechanism";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mechanism.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_enableClientCertificateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableClientCertificate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableClientCertificate, allocator);
    }

    if (m_enableServerCertificateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableServerCertificate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableServerCertificate, allocator);
    }

    if (m_cACertificateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CACertificateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cACertificateId.c_str(), allocator).Move(), allocator);
    }

    if (m_sVRCertificateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SVRCertificateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sVRCertificateId.c_str(), allocator).Move(), allocator);
    }

}


string KafkaProtocolInfo::GetProtocol() const
{
    return m_protocol;
}

void KafkaProtocolInfo::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool KafkaProtocolInfo::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string KafkaProtocolInfo::GetMechanism() const
{
    return m_mechanism;
}

void KafkaProtocolInfo::SetMechanism(const string& _mechanism)
{
    m_mechanism = _mechanism;
    m_mechanismHasBeenSet = true;
}

bool KafkaProtocolInfo::MechanismHasBeenSet() const
{
    return m_mechanismHasBeenSet;
}

string KafkaProtocolInfo::GetUserName() const
{
    return m_userName;
}

void KafkaProtocolInfo::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool KafkaProtocolInfo::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string KafkaProtocolInfo::GetPassword() const
{
    return m_password;
}

void KafkaProtocolInfo::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool KafkaProtocolInfo::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

uint64_t KafkaProtocolInfo::GetEnableClientCertificate() const
{
    return m_enableClientCertificate;
}

void KafkaProtocolInfo::SetEnableClientCertificate(const uint64_t& _enableClientCertificate)
{
    m_enableClientCertificate = _enableClientCertificate;
    m_enableClientCertificateHasBeenSet = true;
}

bool KafkaProtocolInfo::EnableClientCertificateHasBeenSet() const
{
    return m_enableClientCertificateHasBeenSet;
}

uint64_t KafkaProtocolInfo::GetEnableServerCertificate() const
{
    return m_enableServerCertificate;
}

void KafkaProtocolInfo::SetEnableServerCertificate(const uint64_t& _enableServerCertificate)
{
    m_enableServerCertificate = _enableServerCertificate;
    m_enableServerCertificateHasBeenSet = true;
}

bool KafkaProtocolInfo::EnableServerCertificateHasBeenSet() const
{
    return m_enableServerCertificateHasBeenSet;
}

string KafkaProtocolInfo::GetCACertificateId() const
{
    return m_cACertificateId;
}

void KafkaProtocolInfo::SetCACertificateId(const string& _cACertificateId)
{
    m_cACertificateId = _cACertificateId;
    m_cACertificateIdHasBeenSet = true;
}

bool KafkaProtocolInfo::CACertificateIdHasBeenSet() const
{
    return m_cACertificateIdHasBeenSet;
}

string KafkaProtocolInfo::GetSVRCertificateId() const
{
    return m_sVRCertificateId;
}

void KafkaProtocolInfo::SetSVRCertificateId(const string& _sVRCertificateId)
{
    m_sVRCertificateId = _sVRCertificateId;
    m_sVRCertificateIdHasBeenSet = true;
}

bool KafkaProtocolInfo::SVRCertificateIdHasBeenSet() const
{
    return m_sVRCertificateIdHasBeenSet;
}


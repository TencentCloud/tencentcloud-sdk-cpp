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

#include <tencentcloud/vpc/v20170312/model/IKEOptionsSpecification.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

IKEOptionsSpecification::IKEOptionsSpecification() :
    m_propoEncryAlgorithmHasBeenSet(false),
    m_propoAuthenAlgorithmHasBeenSet(false),
    m_exchangeModeHasBeenSet(false),
    m_localIdentityHasBeenSet(false),
    m_remoteIdentityHasBeenSet(false),
    m_localAddressHasBeenSet(false),
    m_remoteAddressHasBeenSet(false),
    m_localFqdnNameHasBeenSet(false),
    m_remoteFqdnNameHasBeenSet(false),
    m_dhGroupNameHasBeenSet(false),
    m_iKESaLifetimeSecondsHasBeenSet(false),
    m_iKEVersionHasBeenSet(false)
{
}

CoreInternalOutcome IKEOptionsSpecification::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PropoEncryAlgorithm") && !value["PropoEncryAlgorithm"].IsNull())
    {
        if (!value["PropoEncryAlgorithm"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IKEOptionsSpecification.PropoEncryAlgorithm` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_propoEncryAlgorithm = string(value["PropoEncryAlgorithm"].GetString());
        m_propoEncryAlgorithmHasBeenSet = true;
    }

    if (value.HasMember("PropoAuthenAlgorithm") && !value["PropoAuthenAlgorithm"].IsNull())
    {
        if (!value["PropoAuthenAlgorithm"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IKEOptionsSpecification.PropoAuthenAlgorithm` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_propoAuthenAlgorithm = string(value["PropoAuthenAlgorithm"].GetString());
        m_propoAuthenAlgorithmHasBeenSet = true;
    }

    if (value.HasMember("ExchangeMode") && !value["ExchangeMode"].IsNull())
    {
        if (!value["ExchangeMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IKEOptionsSpecification.ExchangeMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exchangeMode = string(value["ExchangeMode"].GetString());
        m_exchangeModeHasBeenSet = true;
    }

    if (value.HasMember("LocalIdentity") && !value["LocalIdentity"].IsNull())
    {
        if (!value["LocalIdentity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IKEOptionsSpecification.LocalIdentity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_localIdentity = string(value["LocalIdentity"].GetString());
        m_localIdentityHasBeenSet = true;
    }

    if (value.HasMember("RemoteIdentity") && !value["RemoteIdentity"].IsNull())
    {
        if (!value["RemoteIdentity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IKEOptionsSpecification.RemoteIdentity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remoteIdentity = string(value["RemoteIdentity"].GetString());
        m_remoteIdentityHasBeenSet = true;
    }

    if (value.HasMember("LocalAddress") && !value["LocalAddress"].IsNull())
    {
        if (!value["LocalAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IKEOptionsSpecification.LocalAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_localAddress = string(value["LocalAddress"].GetString());
        m_localAddressHasBeenSet = true;
    }

    if (value.HasMember("RemoteAddress") && !value["RemoteAddress"].IsNull())
    {
        if (!value["RemoteAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IKEOptionsSpecification.RemoteAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remoteAddress = string(value["RemoteAddress"].GetString());
        m_remoteAddressHasBeenSet = true;
    }

    if (value.HasMember("LocalFqdnName") && !value["LocalFqdnName"].IsNull())
    {
        if (!value["LocalFqdnName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IKEOptionsSpecification.LocalFqdnName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_localFqdnName = string(value["LocalFqdnName"].GetString());
        m_localFqdnNameHasBeenSet = true;
    }

    if (value.HasMember("RemoteFqdnName") && !value["RemoteFqdnName"].IsNull())
    {
        if (!value["RemoteFqdnName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IKEOptionsSpecification.RemoteFqdnName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remoteFqdnName = string(value["RemoteFqdnName"].GetString());
        m_remoteFqdnNameHasBeenSet = true;
    }

    if (value.HasMember("DhGroupName") && !value["DhGroupName"].IsNull())
    {
        if (!value["DhGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IKEOptionsSpecification.DhGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dhGroupName = string(value["DhGroupName"].GetString());
        m_dhGroupNameHasBeenSet = true;
    }

    if (value.HasMember("IKESaLifetimeSeconds") && !value["IKESaLifetimeSeconds"].IsNull())
    {
        if (!value["IKESaLifetimeSeconds"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IKEOptionsSpecification.IKESaLifetimeSeconds` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_iKESaLifetimeSeconds = value["IKESaLifetimeSeconds"].GetUint64();
        m_iKESaLifetimeSecondsHasBeenSet = true;
    }

    if (value.HasMember("IKEVersion") && !value["IKEVersion"].IsNull())
    {
        if (!value["IKEVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IKEOptionsSpecification.IKEVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iKEVersion = string(value["IKEVersion"].GetString());
        m_iKEVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IKEOptionsSpecification::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_propoEncryAlgorithmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PropoEncryAlgorithm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_propoEncryAlgorithm.c_str(), allocator).Move(), allocator);
    }

    if (m_propoAuthenAlgorithmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PropoAuthenAlgorithm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_propoAuthenAlgorithm.c_str(), allocator).Move(), allocator);
    }

    if (m_exchangeModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExchangeMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exchangeMode.c_str(), allocator).Move(), allocator);
    }

    if (m_localIdentityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalIdentity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_localIdentity.c_str(), allocator).Move(), allocator);
    }

    if (m_remoteIdentityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteIdentity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remoteIdentity.c_str(), allocator).Move(), allocator);
    }

    if (m_localAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_localAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_remoteAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remoteAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_localFqdnNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalFqdnName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_localFqdnName.c_str(), allocator).Move(), allocator);
    }

    if (m_remoteFqdnNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteFqdnName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remoteFqdnName.c_str(), allocator).Move(), allocator);
    }

    if (m_dhGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DhGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dhGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_iKESaLifetimeSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IKESaLifetimeSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iKESaLifetimeSeconds, allocator);
    }

    if (m_iKEVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IKEVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iKEVersion.c_str(), allocator).Move(), allocator);
    }

}


string IKEOptionsSpecification::GetPropoEncryAlgorithm() const
{
    return m_propoEncryAlgorithm;
}

void IKEOptionsSpecification::SetPropoEncryAlgorithm(const string& _propoEncryAlgorithm)
{
    m_propoEncryAlgorithm = _propoEncryAlgorithm;
    m_propoEncryAlgorithmHasBeenSet = true;
}

bool IKEOptionsSpecification::PropoEncryAlgorithmHasBeenSet() const
{
    return m_propoEncryAlgorithmHasBeenSet;
}

string IKEOptionsSpecification::GetPropoAuthenAlgorithm() const
{
    return m_propoAuthenAlgorithm;
}

void IKEOptionsSpecification::SetPropoAuthenAlgorithm(const string& _propoAuthenAlgorithm)
{
    m_propoAuthenAlgorithm = _propoAuthenAlgorithm;
    m_propoAuthenAlgorithmHasBeenSet = true;
}

bool IKEOptionsSpecification::PropoAuthenAlgorithmHasBeenSet() const
{
    return m_propoAuthenAlgorithmHasBeenSet;
}

string IKEOptionsSpecification::GetExchangeMode() const
{
    return m_exchangeMode;
}

void IKEOptionsSpecification::SetExchangeMode(const string& _exchangeMode)
{
    m_exchangeMode = _exchangeMode;
    m_exchangeModeHasBeenSet = true;
}

bool IKEOptionsSpecification::ExchangeModeHasBeenSet() const
{
    return m_exchangeModeHasBeenSet;
}

string IKEOptionsSpecification::GetLocalIdentity() const
{
    return m_localIdentity;
}

void IKEOptionsSpecification::SetLocalIdentity(const string& _localIdentity)
{
    m_localIdentity = _localIdentity;
    m_localIdentityHasBeenSet = true;
}

bool IKEOptionsSpecification::LocalIdentityHasBeenSet() const
{
    return m_localIdentityHasBeenSet;
}

string IKEOptionsSpecification::GetRemoteIdentity() const
{
    return m_remoteIdentity;
}

void IKEOptionsSpecification::SetRemoteIdentity(const string& _remoteIdentity)
{
    m_remoteIdentity = _remoteIdentity;
    m_remoteIdentityHasBeenSet = true;
}

bool IKEOptionsSpecification::RemoteIdentityHasBeenSet() const
{
    return m_remoteIdentityHasBeenSet;
}

string IKEOptionsSpecification::GetLocalAddress() const
{
    return m_localAddress;
}

void IKEOptionsSpecification::SetLocalAddress(const string& _localAddress)
{
    m_localAddress = _localAddress;
    m_localAddressHasBeenSet = true;
}

bool IKEOptionsSpecification::LocalAddressHasBeenSet() const
{
    return m_localAddressHasBeenSet;
}

string IKEOptionsSpecification::GetRemoteAddress() const
{
    return m_remoteAddress;
}

void IKEOptionsSpecification::SetRemoteAddress(const string& _remoteAddress)
{
    m_remoteAddress = _remoteAddress;
    m_remoteAddressHasBeenSet = true;
}

bool IKEOptionsSpecification::RemoteAddressHasBeenSet() const
{
    return m_remoteAddressHasBeenSet;
}

string IKEOptionsSpecification::GetLocalFqdnName() const
{
    return m_localFqdnName;
}

void IKEOptionsSpecification::SetLocalFqdnName(const string& _localFqdnName)
{
    m_localFqdnName = _localFqdnName;
    m_localFqdnNameHasBeenSet = true;
}

bool IKEOptionsSpecification::LocalFqdnNameHasBeenSet() const
{
    return m_localFqdnNameHasBeenSet;
}

string IKEOptionsSpecification::GetRemoteFqdnName() const
{
    return m_remoteFqdnName;
}

void IKEOptionsSpecification::SetRemoteFqdnName(const string& _remoteFqdnName)
{
    m_remoteFqdnName = _remoteFqdnName;
    m_remoteFqdnNameHasBeenSet = true;
}

bool IKEOptionsSpecification::RemoteFqdnNameHasBeenSet() const
{
    return m_remoteFqdnNameHasBeenSet;
}

string IKEOptionsSpecification::GetDhGroupName() const
{
    return m_dhGroupName;
}

void IKEOptionsSpecification::SetDhGroupName(const string& _dhGroupName)
{
    m_dhGroupName = _dhGroupName;
    m_dhGroupNameHasBeenSet = true;
}

bool IKEOptionsSpecification::DhGroupNameHasBeenSet() const
{
    return m_dhGroupNameHasBeenSet;
}

uint64_t IKEOptionsSpecification::GetIKESaLifetimeSeconds() const
{
    return m_iKESaLifetimeSeconds;
}

void IKEOptionsSpecification::SetIKESaLifetimeSeconds(const uint64_t& _iKESaLifetimeSeconds)
{
    m_iKESaLifetimeSeconds = _iKESaLifetimeSeconds;
    m_iKESaLifetimeSecondsHasBeenSet = true;
}

bool IKEOptionsSpecification::IKESaLifetimeSecondsHasBeenSet() const
{
    return m_iKESaLifetimeSecondsHasBeenSet;
}

string IKEOptionsSpecification::GetIKEVersion() const
{
    return m_iKEVersion;
}

void IKEOptionsSpecification::SetIKEVersion(const string& _iKEVersion)
{
    m_iKEVersion = _iKEVersion;
    m_iKEVersionHasBeenSet = true;
}

bool IKEOptionsSpecification::IKEVersionHasBeenSet() const
{
    return m_iKEVersionHasBeenSet;
}


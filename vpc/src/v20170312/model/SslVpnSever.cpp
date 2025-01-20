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

#include <tencentcloud/vpc/v20170312/model/SslVpnSever.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

SslVpnSever::SslVpnSever() :
    m_vpcIdHasBeenSet(false),
    m_sslVpnServerIdHasBeenSet(false),
    m_vpnGatewayIdHasBeenSet(false),
    m_sslVpnServerNameHasBeenSet(false),
    m_localAddressHasBeenSet(false),
    m_remoteAddressHasBeenSet(false),
    m_maxConnectionHasBeenSet(false),
    m_wanIpHasBeenSet(false),
    m_sslVpnProtocolHasBeenSet(false),
    m_sslVpnPortHasBeenSet(false),
    m_encryptAlgorithmHasBeenSet(false),
    m_integrityAlgorithmHasBeenSet(false),
    m_compressHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_ssoEnabledHasBeenSet(false),
    m_eiamApplicationIdHasBeenSet(false),
    m_accessPolicyEnabledHasBeenSet(false),
    m_accessPolicyHasBeenSet(false),
    m_spNameHasBeenSet(false)
{
}

CoreInternalOutcome SslVpnSever::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SslVpnSever.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SslVpnServerId") && !value["SslVpnServerId"].IsNull())
    {
        if (!value["SslVpnServerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SslVpnSever.SslVpnServerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sslVpnServerId = string(value["SslVpnServerId"].GetString());
        m_sslVpnServerIdHasBeenSet = true;
    }

    if (value.HasMember("VpnGatewayId") && !value["VpnGatewayId"].IsNull())
    {
        if (!value["VpnGatewayId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SslVpnSever.VpnGatewayId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpnGatewayId = string(value["VpnGatewayId"].GetString());
        m_vpnGatewayIdHasBeenSet = true;
    }

    if (value.HasMember("SslVpnServerName") && !value["SslVpnServerName"].IsNull())
    {
        if (!value["SslVpnServerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SslVpnSever.SslVpnServerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sslVpnServerName = string(value["SslVpnServerName"].GetString());
        m_sslVpnServerNameHasBeenSet = true;
    }

    if (value.HasMember("LocalAddress") && !value["LocalAddress"].IsNull())
    {
        if (!value["LocalAddress"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SslVpnSever.LocalAddress` is not array type"));

        const rapidjson::Value &tmpValue = value["LocalAddress"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_localAddress.push_back((*itr).GetString());
        }
        m_localAddressHasBeenSet = true;
    }

    if (value.HasMember("RemoteAddress") && !value["RemoteAddress"].IsNull())
    {
        if (!value["RemoteAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SslVpnSever.RemoteAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remoteAddress = string(value["RemoteAddress"].GetString());
        m_remoteAddressHasBeenSet = true;
    }

    if (value.HasMember("MaxConnection") && !value["MaxConnection"].IsNull())
    {
        if (!value["MaxConnection"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SslVpnSever.MaxConnection` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxConnection = value["MaxConnection"].GetUint64();
        m_maxConnectionHasBeenSet = true;
    }

    if (value.HasMember("WanIp") && !value["WanIp"].IsNull())
    {
        if (!value["WanIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SslVpnSever.WanIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wanIp = string(value["WanIp"].GetString());
        m_wanIpHasBeenSet = true;
    }

    if (value.HasMember("SslVpnProtocol") && !value["SslVpnProtocol"].IsNull())
    {
        if (!value["SslVpnProtocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SslVpnSever.SslVpnProtocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sslVpnProtocol = string(value["SslVpnProtocol"].GetString());
        m_sslVpnProtocolHasBeenSet = true;
    }

    if (value.HasMember("SslVpnPort") && !value["SslVpnPort"].IsNull())
    {
        if (!value["SslVpnPort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SslVpnSever.SslVpnPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sslVpnPort = value["SslVpnPort"].GetUint64();
        m_sslVpnPortHasBeenSet = true;
    }

    if (value.HasMember("EncryptAlgorithm") && !value["EncryptAlgorithm"].IsNull())
    {
        if (!value["EncryptAlgorithm"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SslVpnSever.EncryptAlgorithm` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryptAlgorithm = string(value["EncryptAlgorithm"].GetString());
        m_encryptAlgorithmHasBeenSet = true;
    }

    if (value.HasMember("IntegrityAlgorithm") && !value["IntegrityAlgorithm"].IsNull())
    {
        if (!value["IntegrityAlgorithm"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SslVpnSever.IntegrityAlgorithm` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_integrityAlgorithm = string(value["IntegrityAlgorithm"].GetString());
        m_integrityAlgorithmHasBeenSet = true;
    }

    if (value.HasMember("Compress") && !value["Compress"].IsNull())
    {
        if (!value["Compress"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SslVpnSever.Compress` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_compress = value["Compress"].GetUint64();
        m_compressHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SslVpnSever.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SslVpnSever.State` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_state = value["State"].GetUint64();
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("SsoEnabled") && !value["SsoEnabled"].IsNull())
    {
        if (!value["SsoEnabled"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SslVpnSever.SsoEnabled` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ssoEnabled = value["SsoEnabled"].GetUint64();
        m_ssoEnabledHasBeenSet = true;
    }

    if (value.HasMember("EiamApplicationId") && !value["EiamApplicationId"].IsNull())
    {
        if (!value["EiamApplicationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SslVpnSever.EiamApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eiamApplicationId = string(value["EiamApplicationId"].GetString());
        m_eiamApplicationIdHasBeenSet = true;
    }

    if (value.HasMember("AccessPolicyEnabled") && !value["AccessPolicyEnabled"].IsNull())
    {
        if (!value["AccessPolicyEnabled"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SslVpnSever.AccessPolicyEnabled` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_accessPolicyEnabled = value["AccessPolicyEnabled"].GetUint64();
        m_accessPolicyEnabledHasBeenSet = true;
    }

    if (value.HasMember("AccessPolicy") && !value["AccessPolicy"].IsNull())
    {
        if (!value["AccessPolicy"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SslVpnSever.AccessPolicy` is not array type"));

        const rapidjson::Value &tmpValue = value["AccessPolicy"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AccessPolicy item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_accessPolicy.push_back(item);
        }
        m_accessPolicyHasBeenSet = true;
    }

    if (value.HasMember("SpName") && !value["SpName"].IsNull())
    {
        if (!value["SpName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SslVpnSever.SpName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spName = string(value["SpName"].GetString());
        m_spNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SslVpnSever::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_sslVpnServerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SslVpnServerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sslVpnServerId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpnGatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpnGatewayId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpnGatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_sslVpnServerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SslVpnServerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sslVpnServerName.c_str(), allocator).Move(), allocator);
    }

    if (m_localAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_localAddress.begin(); itr != m_localAddress.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_remoteAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remoteAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_maxConnectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxConnection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxConnection, allocator);
    }

    if (m_wanIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WanIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wanIp.c_str(), allocator).Move(), allocator);
    }

    if (m_sslVpnProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SslVpnProtocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sslVpnProtocol.c_str(), allocator).Move(), allocator);
    }

    if (m_sslVpnPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SslVpnPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sslVpnPort, allocator);
    }

    if (m_encryptAlgorithmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptAlgorithm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encryptAlgorithm.c_str(), allocator).Move(), allocator);
    }

    if (m_integrityAlgorithmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntegrityAlgorithm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_integrityAlgorithm.c_str(), allocator).Move(), allocator);
    }

    if (m_compressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Compress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_compress, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_state, allocator);
    }

    if (m_ssoEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SsoEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ssoEnabled, allocator);
    }

    if (m_eiamApplicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EiamApplicationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eiamApplicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_accessPolicyEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessPolicyEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accessPolicyEnabled, allocator);
    }

    if (m_accessPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_accessPolicy.begin(); itr != m_accessPolicy.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_spNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spName.c_str(), allocator).Move(), allocator);
    }

}


string SslVpnSever::GetVpcId() const
{
    return m_vpcId;
}

void SslVpnSever::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool SslVpnSever::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string SslVpnSever::GetSslVpnServerId() const
{
    return m_sslVpnServerId;
}

void SslVpnSever::SetSslVpnServerId(const string& _sslVpnServerId)
{
    m_sslVpnServerId = _sslVpnServerId;
    m_sslVpnServerIdHasBeenSet = true;
}

bool SslVpnSever::SslVpnServerIdHasBeenSet() const
{
    return m_sslVpnServerIdHasBeenSet;
}

string SslVpnSever::GetVpnGatewayId() const
{
    return m_vpnGatewayId;
}

void SslVpnSever::SetVpnGatewayId(const string& _vpnGatewayId)
{
    m_vpnGatewayId = _vpnGatewayId;
    m_vpnGatewayIdHasBeenSet = true;
}

bool SslVpnSever::VpnGatewayIdHasBeenSet() const
{
    return m_vpnGatewayIdHasBeenSet;
}

string SslVpnSever::GetSslVpnServerName() const
{
    return m_sslVpnServerName;
}

void SslVpnSever::SetSslVpnServerName(const string& _sslVpnServerName)
{
    m_sslVpnServerName = _sslVpnServerName;
    m_sslVpnServerNameHasBeenSet = true;
}

bool SslVpnSever::SslVpnServerNameHasBeenSet() const
{
    return m_sslVpnServerNameHasBeenSet;
}

vector<string> SslVpnSever::GetLocalAddress() const
{
    return m_localAddress;
}

void SslVpnSever::SetLocalAddress(const vector<string>& _localAddress)
{
    m_localAddress = _localAddress;
    m_localAddressHasBeenSet = true;
}

bool SslVpnSever::LocalAddressHasBeenSet() const
{
    return m_localAddressHasBeenSet;
}

string SslVpnSever::GetRemoteAddress() const
{
    return m_remoteAddress;
}

void SslVpnSever::SetRemoteAddress(const string& _remoteAddress)
{
    m_remoteAddress = _remoteAddress;
    m_remoteAddressHasBeenSet = true;
}

bool SslVpnSever::RemoteAddressHasBeenSet() const
{
    return m_remoteAddressHasBeenSet;
}

uint64_t SslVpnSever::GetMaxConnection() const
{
    return m_maxConnection;
}

void SslVpnSever::SetMaxConnection(const uint64_t& _maxConnection)
{
    m_maxConnection = _maxConnection;
    m_maxConnectionHasBeenSet = true;
}

bool SslVpnSever::MaxConnectionHasBeenSet() const
{
    return m_maxConnectionHasBeenSet;
}

string SslVpnSever::GetWanIp() const
{
    return m_wanIp;
}

void SslVpnSever::SetWanIp(const string& _wanIp)
{
    m_wanIp = _wanIp;
    m_wanIpHasBeenSet = true;
}

bool SslVpnSever::WanIpHasBeenSet() const
{
    return m_wanIpHasBeenSet;
}

string SslVpnSever::GetSslVpnProtocol() const
{
    return m_sslVpnProtocol;
}

void SslVpnSever::SetSslVpnProtocol(const string& _sslVpnProtocol)
{
    m_sslVpnProtocol = _sslVpnProtocol;
    m_sslVpnProtocolHasBeenSet = true;
}

bool SslVpnSever::SslVpnProtocolHasBeenSet() const
{
    return m_sslVpnProtocolHasBeenSet;
}

uint64_t SslVpnSever::GetSslVpnPort() const
{
    return m_sslVpnPort;
}

void SslVpnSever::SetSslVpnPort(const uint64_t& _sslVpnPort)
{
    m_sslVpnPort = _sslVpnPort;
    m_sslVpnPortHasBeenSet = true;
}

bool SslVpnSever::SslVpnPortHasBeenSet() const
{
    return m_sslVpnPortHasBeenSet;
}

string SslVpnSever::GetEncryptAlgorithm() const
{
    return m_encryptAlgorithm;
}

void SslVpnSever::SetEncryptAlgorithm(const string& _encryptAlgorithm)
{
    m_encryptAlgorithm = _encryptAlgorithm;
    m_encryptAlgorithmHasBeenSet = true;
}

bool SslVpnSever::EncryptAlgorithmHasBeenSet() const
{
    return m_encryptAlgorithmHasBeenSet;
}

string SslVpnSever::GetIntegrityAlgorithm() const
{
    return m_integrityAlgorithm;
}

void SslVpnSever::SetIntegrityAlgorithm(const string& _integrityAlgorithm)
{
    m_integrityAlgorithm = _integrityAlgorithm;
    m_integrityAlgorithmHasBeenSet = true;
}

bool SslVpnSever::IntegrityAlgorithmHasBeenSet() const
{
    return m_integrityAlgorithmHasBeenSet;
}

uint64_t SslVpnSever::GetCompress() const
{
    return m_compress;
}

void SslVpnSever::SetCompress(const uint64_t& _compress)
{
    m_compress = _compress;
    m_compressHasBeenSet = true;
}

bool SslVpnSever::CompressHasBeenSet() const
{
    return m_compressHasBeenSet;
}

string SslVpnSever::GetCreateTime() const
{
    return m_createTime;
}

void SslVpnSever::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool SslVpnSever::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t SslVpnSever::GetState() const
{
    return m_state;
}

void SslVpnSever::SetState(const uint64_t& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool SslVpnSever::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

uint64_t SslVpnSever::GetSsoEnabled() const
{
    return m_ssoEnabled;
}

void SslVpnSever::SetSsoEnabled(const uint64_t& _ssoEnabled)
{
    m_ssoEnabled = _ssoEnabled;
    m_ssoEnabledHasBeenSet = true;
}

bool SslVpnSever::SsoEnabledHasBeenSet() const
{
    return m_ssoEnabledHasBeenSet;
}

string SslVpnSever::GetEiamApplicationId() const
{
    return m_eiamApplicationId;
}

void SslVpnSever::SetEiamApplicationId(const string& _eiamApplicationId)
{
    m_eiamApplicationId = _eiamApplicationId;
    m_eiamApplicationIdHasBeenSet = true;
}

bool SslVpnSever::EiamApplicationIdHasBeenSet() const
{
    return m_eiamApplicationIdHasBeenSet;
}

uint64_t SslVpnSever::GetAccessPolicyEnabled() const
{
    return m_accessPolicyEnabled;
}

void SslVpnSever::SetAccessPolicyEnabled(const uint64_t& _accessPolicyEnabled)
{
    m_accessPolicyEnabled = _accessPolicyEnabled;
    m_accessPolicyEnabledHasBeenSet = true;
}

bool SslVpnSever::AccessPolicyEnabledHasBeenSet() const
{
    return m_accessPolicyEnabledHasBeenSet;
}

vector<AccessPolicy> SslVpnSever::GetAccessPolicy() const
{
    return m_accessPolicy;
}

void SslVpnSever::SetAccessPolicy(const vector<AccessPolicy>& _accessPolicy)
{
    m_accessPolicy = _accessPolicy;
    m_accessPolicyHasBeenSet = true;
}

bool SslVpnSever::AccessPolicyHasBeenSet() const
{
    return m_accessPolicyHasBeenSet;
}

string SslVpnSever::GetSpName() const
{
    return m_spName;
}

void SslVpnSever::SetSpName(const string& _spName)
{
    m_spName = _spName;
    m_spNameHasBeenSet = true;
}

bool SslVpnSever::SpNameHasBeenSet() const
{
    return m_spNameHasBeenSet;
}


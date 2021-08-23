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

#include <tencentcloud/bmlb/v20180625/model/L7ExListener.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bmlb::V20180625::Model;
using namespace std;

L7ExListener::L7ExListener() :
    m_listenerIdHasBeenSet(false),
    m_listenerNameHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_loadBalancerPortHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_maxBandwidthHasBeenSet(false),
    m_listenerTypeHasBeenSet(false),
    m_sslModeHasBeenSet(false),
    m_certIdHasBeenSet(false),
    m_certCaIdHasBeenSet(false),
    m_addTimestampHasBeenSet(false),
    m_loadBalancerIdHasBeenSet(false),
    m_vpcNameHasBeenSet(false),
    m_vpcCidrBlockHasBeenSet(false),
    m_loadBalancerVipsHasBeenSet(false),
    m_loadBalancerNameHasBeenSet(false),
    m_loadBalancerVipv6sHasBeenSet(false),
    m_ipProtocolTypeHasBeenSet(false),
    m_bindTrafficMirrorHasBeenSet(false)
{
}

CoreInternalOutcome L7ExListener::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ListenerId") && !value["ListenerId"].IsNull())
    {
        if (!value["ListenerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L7ExListener.ListenerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerId = string(value["ListenerId"].GetString());
        m_listenerIdHasBeenSet = true;
    }

    if (value.HasMember("ListenerName") && !value["ListenerName"].IsNull())
    {
        if (!value["ListenerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L7ExListener.ListenerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerName = string(value["ListenerName"].GetString());
        m_listenerNameHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L7ExListener.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancerPort") && !value["LoadBalancerPort"].IsNull())
    {
        if (!value["LoadBalancerPort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `L7ExListener.LoadBalancerPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancerPort = value["LoadBalancerPort"].GetUint64();
        m_loadBalancerPortHasBeenSet = true;
    }

    if (value.HasMember("Bandwidth") && !value["Bandwidth"].IsNull())
    {
        if (!value["Bandwidth"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `L7ExListener.Bandwidth` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidth = value["Bandwidth"].GetUint64();
        m_bandwidthHasBeenSet = true;
    }

    if (value.HasMember("MaxBandwidth") && !value["MaxBandwidth"].IsNull())
    {
        if (!value["MaxBandwidth"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `L7ExListener.MaxBandwidth` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxBandwidth = value["MaxBandwidth"].GetUint64();
        m_maxBandwidthHasBeenSet = true;
    }

    if (value.HasMember("ListenerType") && !value["ListenerType"].IsNull())
    {
        if (!value["ListenerType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L7ExListener.ListenerType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerType = string(value["ListenerType"].GetString());
        m_listenerTypeHasBeenSet = true;
    }

    if (value.HasMember("SslMode") && !value["SslMode"].IsNull())
    {
        if (!value["SslMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `L7ExListener.SslMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sslMode = value["SslMode"].GetInt64();
        m_sslModeHasBeenSet = true;
    }

    if (value.HasMember("CertId") && !value["CertId"].IsNull())
    {
        if (!value["CertId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L7ExListener.CertId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certId = string(value["CertId"].GetString());
        m_certIdHasBeenSet = true;
    }

    if (value.HasMember("CertCaId") && !value["CertCaId"].IsNull())
    {
        if (!value["CertCaId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L7ExListener.CertCaId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certCaId = string(value["CertCaId"].GetString());
        m_certCaIdHasBeenSet = true;
    }

    if (value.HasMember("AddTimestamp") && !value["AddTimestamp"].IsNull())
    {
        if (!value["AddTimestamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L7ExListener.AddTimestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addTimestamp = string(value["AddTimestamp"].GetString());
        m_addTimestampHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancerId") && !value["LoadBalancerId"].IsNull())
    {
        if (!value["LoadBalancerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L7ExListener.LoadBalancerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancerId = string(value["LoadBalancerId"].GetString());
        m_loadBalancerIdHasBeenSet = true;
    }

    if (value.HasMember("VpcName") && !value["VpcName"].IsNull())
    {
        if (!value["VpcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L7ExListener.VpcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcName = string(value["VpcName"].GetString());
        m_vpcNameHasBeenSet = true;
    }

    if (value.HasMember("VpcCidrBlock") && !value["VpcCidrBlock"].IsNull())
    {
        if (!value["VpcCidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L7ExListener.VpcCidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcCidrBlock = string(value["VpcCidrBlock"].GetString());
        m_vpcCidrBlockHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancerVips") && !value["LoadBalancerVips"].IsNull())
    {
        if (!value["LoadBalancerVips"].IsArray())
            return CoreInternalOutcome(Core::Error("response `L7ExListener.LoadBalancerVips` is not array type"));

        const rapidjson::Value &tmpValue = value["LoadBalancerVips"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_loadBalancerVips.push_back((*itr).GetString());
        }
        m_loadBalancerVipsHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancerName") && !value["LoadBalancerName"].IsNull())
    {
        if (!value["LoadBalancerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L7ExListener.LoadBalancerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancerName = string(value["LoadBalancerName"].GetString());
        m_loadBalancerNameHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancerVipv6s") && !value["LoadBalancerVipv6s"].IsNull())
    {
        if (!value["LoadBalancerVipv6s"].IsArray())
            return CoreInternalOutcome(Core::Error("response `L7ExListener.LoadBalancerVipv6s` is not array type"));

        const rapidjson::Value &tmpValue = value["LoadBalancerVipv6s"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_loadBalancerVipv6s.push_back((*itr).GetString());
        }
        m_loadBalancerVipv6sHasBeenSet = true;
    }

    if (value.HasMember("IpProtocolType") && !value["IpProtocolType"].IsNull())
    {
        if (!value["IpProtocolType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L7ExListener.IpProtocolType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipProtocolType = string(value["IpProtocolType"].GetString());
        m_ipProtocolTypeHasBeenSet = true;
    }

    if (value.HasMember("BindTrafficMirror") && !value["BindTrafficMirror"].IsNull())
    {
        if (!value["BindTrafficMirror"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `L7ExListener.BindTrafficMirror` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_bindTrafficMirror = value["BindTrafficMirror"].GetBool();
        m_bindTrafficMirrorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void L7ExListener::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_listenerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_listenerId.c_str(), allocator).Move(), allocator);
    }

    if (m_listenerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_listenerName.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loadBalancerPort, allocator);
    }

    if (m_bandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bandwidth, allocator);
    }

    if (m_maxBandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxBandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxBandwidth, allocator);
    }

    if (m_listenerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_listenerType.c_str(), allocator).Move(), allocator);
    }

    if (m_sslModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SslMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sslMode, allocator);
    }

    if (m_certIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certId.c_str(), allocator).Move(), allocator);
    }

    if (m_certCaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertCaId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certCaId.c_str(), allocator).Move(), allocator);
    }

    if (m_addTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addTimestamp.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loadBalancerId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcName.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcCidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcCidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcCidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerVipsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerVips";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_loadBalancerVips.begin(); itr != m_loadBalancerVips.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_loadBalancerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loadBalancerName.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerVipv6sHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerVipv6s";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_loadBalancerVipv6s.begin(); itr != m_loadBalancerVipv6s.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ipProtocolTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpProtocolType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipProtocolType.c_str(), allocator).Move(), allocator);
    }

    if (m_bindTrafficMirrorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindTrafficMirror";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bindTrafficMirror, allocator);
    }

}


string L7ExListener::GetListenerId() const
{
    return m_listenerId;
}

void L7ExListener::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool L7ExListener::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

string L7ExListener::GetListenerName() const
{
    return m_listenerName;
}

void L7ExListener::SetListenerName(const string& _listenerName)
{
    m_listenerName = _listenerName;
    m_listenerNameHasBeenSet = true;
}

bool L7ExListener::ListenerNameHasBeenSet() const
{
    return m_listenerNameHasBeenSet;
}

string L7ExListener::GetProtocol() const
{
    return m_protocol;
}

void L7ExListener::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool L7ExListener::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

uint64_t L7ExListener::GetLoadBalancerPort() const
{
    return m_loadBalancerPort;
}

void L7ExListener::SetLoadBalancerPort(const uint64_t& _loadBalancerPort)
{
    m_loadBalancerPort = _loadBalancerPort;
    m_loadBalancerPortHasBeenSet = true;
}

bool L7ExListener::LoadBalancerPortHasBeenSet() const
{
    return m_loadBalancerPortHasBeenSet;
}

uint64_t L7ExListener::GetBandwidth() const
{
    return m_bandwidth;
}

void L7ExListener::SetBandwidth(const uint64_t& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool L7ExListener::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

uint64_t L7ExListener::GetMaxBandwidth() const
{
    return m_maxBandwidth;
}

void L7ExListener::SetMaxBandwidth(const uint64_t& _maxBandwidth)
{
    m_maxBandwidth = _maxBandwidth;
    m_maxBandwidthHasBeenSet = true;
}

bool L7ExListener::MaxBandwidthHasBeenSet() const
{
    return m_maxBandwidthHasBeenSet;
}

string L7ExListener::GetListenerType() const
{
    return m_listenerType;
}

void L7ExListener::SetListenerType(const string& _listenerType)
{
    m_listenerType = _listenerType;
    m_listenerTypeHasBeenSet = true;
}

bool L7ExListener::ListenerTypeHasBeenSet() const
{
    return m_listenerTypeHasBeenSet;
}

int64_t L7ExListener::GetSslMode() const
{
    return m_sslMode;
}

void L7ExListener::SetSslMode(const int64_t& _sslMode)
{
    m_sslMode = _sslMode;
    m_sslModeHasBeenSet = true;
}

bool L7ExListener::SslModeHasBeenSet() const
{
    return m_sslModeHasBeenSet;
}

string L7ExListener::GetCertId() const
{
    return m_certId;
}

void L7ExListener::SetCertId(const string& _certId)
{
    m_certId = _certId;
    m_certIdHasBeenSet = true;
}

bool L7ExListener::CertIdHasBeenSet() const
{
    return m_certIdHasBeenSet;
}

string L7ExListener::GetCertCaId() const
{
    return m_certCaId;
}

void L7ExListener::SetCertCaId(const string& _certCaId)
{
    m_certCaId = _certCaId;
    m_certCaIdHasBeenSet = true;
}

bool L7ExListener::CertCaIdHasBeenSet() const
{
    return m_certCaIdHasBeenSet;
}

string L7ExListener::GetAddTimestamp() const
{
    return m_addTimestamp;
}

void L7ExListener::SetAddTimestamp(const string& _addTimestamp)
{
    m_addTimestamp = _addTimestamp;
    m_addTimestampHasBeenSet = true;
}

bool L7ExListener::AddTimestampHasBeenSet() const
{
    return m_addTimestampHasBeenSet;
}

string L7ExListener::GetLoadBalancerId() const
{
    return m_loadBalancerId;
}

void L7ExListener::SetLoadBalancerId(const string& _loadBalancerId)
{
    m_loadBalancerId = _loadBalancerId;
    m_loadBalancerIdHasBeenSet = true;
}

bool L7ExListener::LoadBalancerIdHasBeenSet() const
{
    return m_loadBalancerIdHasBeenSet;
}

string L7ExListener::GetVpcName() const
{
    return m_vpcName;
}

void L7ExListener::SetVpcName(const string& _vpcName)
{
    m_vpcName = _vpcName;
    m_vpcNameHasBeenSet = true;
}

bool L7ExListener::VpcNameHasBeenSet() const
{
    return m_vpcNameHasBeenSet;
}

string L7ExListener::GetVpcCidrBlock() const
{
    return m_vpcCidrBlock;
}

void L7ExListener::SetVpcCidrBlock(const string& _vpcCidrBlock)
{
    m_vpcCidrBlock = _vpcCidrBlock;
    m_vpcCidrBlockHasBeenSet = true;
}

bool L7ExListener::VpcCidrBlockHasBeenSet() const
{
    return m_vpcCidrBlockHasBeenSet;
}

vector<string> L7ExListener::GetLoadBalancerVips() const
{
    return m_loadBalancerVips;
}

void L7ExListener::SetLoadBalancerVips(const vector<string>& _loadBalancerVips)
{
    m_loadBalancerVips = _loadBalancerVips;
    m_loadBalancerVipsHasBeenSet = true;
}

bool L7ExListener::LoadBalancerVipsHasBeenSet() const
{
    return m_loadBalancerVipsHasBeenSet;
}

string L7ExListener::GetLoadBalancerName() const
{
    return m_loadBalancerName;
}

void L7ExListener::SetLoadBalancerName(const string& _loadBalancerName)
{
    m_loadBalancerName = _loadBalancerName;
    m_loadBalancerNameHasBeenSet = true;
}

bool L7ExListener::LoadBalancerNameHasBeenSet() const
{
    return m_loadBalancerNameHasBeenSet;
}

vector<string> L7ExListener::GetLoadBalancerVipv6s() const
{
    return m_loadBalancerVipv6s;
}

void L7ExListener::SetLoadBalancerVipv6s(const vector<string>& _loadBalancerVipv6s)
{
    m_loadBalancerVipv6s = _loadBalancerVipv6s;
    m_loadBalancerVipv6sHasBeenSet = true;
}

bool L7ExListener::LoadBalancerVipv6sHasBeenSet() const
{
    return m_loadBalancerVipv6sHasBeenSet;
}

string L7ExListener::GetIpProtocolType() const
{
    return m_ipProtocolType;
}

void L7ExListener::SetIpProtocolType(const string& _ipProtocolType)
{
    m_ipProtocolType = _ipProtocolType;
    m_ipProtocolTypeHasBeenSet = true;
}

bool L7ExListener::IpProtocolTypeHasBeenSet() const
{
    return m_ipProtocolTypeHasBeenSet;
}

bool L7ExListener::GetBindTrafficMirror() const
{
    return m_bindTrafficMirror;
}

void L7ExListener::SetBindTrafficMirror(const bool& _bindTrafficMirror)
{
    m_bindTrafficMirror = _bindTrafficMirror;
    m_bindTrafficMirrorHasBeenSet = true;
}

bool L7ExListener::BindTrafficMirrorHasBeenSet() const
{
    return m_bindTrafficMirrorHasBeenSet;
}


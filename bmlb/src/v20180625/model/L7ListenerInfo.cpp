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

#include <tencentcloud/bmlb/v20180625/model/L7ListenerInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bmlb::V20180625::Model;
using namespace std;

L7ListenerInfo::L7ListenerInfo() :
    m_listenerIdHasBeenSet(false),
    m_listenerNameHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_loadBalancerPortHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_listenerTypeHasBeenSet(false),
    m_sslModeHasBeenSet(false),
    m_certIdHasBeenSet(false),
    m_certCaIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_addTimestampHasBeenSet(false),
    m_ruleSetHasBeenSet(false),
    m_forwardProtocolHasBeenSet(false)
{
}

CoreInternalOutcome L7ListenerInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ListenerId") && !value["ListenerId"].IsNull())
    {
        if (!value["ListenerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L7ListenerInfo.ListenerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerId = string(value["ListenerId"].GetString());
        m_listenerIdHasBeenSet = true;
    }

    if (value.HasMember("ListenerName") && !value["ListenerName"].IsNull())
    {
        if (!value["ListenerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L7ListenerInfo.ListenerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerName = string(value["ListenerName"].GetString());
        m_listenerNameHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L7ListenerInfo.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancerPort") && !value["LoadBalancerPort"].IsNull())
    {
        if (!value["LoadBalancerPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `L7ListenerInfo.LoadBalancerPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancerPort = value["LoadBalancerPort"].GetInt64();
        m_loadBalancerPortHasBeenSet = true;
    }

    if (value.HasMember("Bandwidth") && !value["Bandwidth"].IsNull())
    {
        if (!value["Bandwidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `L7ListenerInfo.Bandwidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidth = value["Bandwidth"].GetInt64();
        m_bandwidthHasBeenSet = true;
    }

    if (value.HasMember("ListenerType") && !value["ListenerType"].IsNull())
    {
        if (!value["ListenerType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L7ListenerInfo.ListenerType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerType = string(value["ListenerType"].GetString());
        m_listenerTypeHasBeenSet = true;
    }

    if (value.HasMember("SslMode") && !value["SslMode"].IsNull())
    {
        if (!value["SslMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `L7ListenerInfo.SslMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sslMode = value["SslMode"].GetInt64();
        m_sslModeHasBeenSet = true;
    }

    if (value.HasMember("CertId") && !value["CertId"].IsNull())
    {
        if (!value["CertId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L7ListenerInfo.CertId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certId = string(value["CertId"].GetString());
        m_certIdHasBeenSet = true;
    }

    if (value.HasMember("CertCaId") && !value["CertCaId"].IsNull())
    {
        if (!value["CertCaId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L7ListenerInfo.CertCaId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certCaId = string(value["CertCaId"].GetString());
        m_certCaIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `L7ListenerInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("AddTimestamp") && !value["AddTimestamp"].IsNull())
    {
        if (!value["AddTimestamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L7ListenerInfo.AddTimestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addTimestamp = string(value["AddTimestamp"].GetString());
        m_addTimestampHasBeenSet = true;
    }

    if (value.HasMember("RuleSet") && !value["RuleSet"].IsNull())
    {
        if (!value["RuleSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `L7ListenerInfo.RuleSet` is not array type"));

        const rapidjson::Value &tmpValue = value["RuleSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            L7ListenerInfoRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ruleSet.push_back(item);
        }
        m_ruleSetHasBeenSet = true;
    }

    if (value.HasMember("ForwardProtocol") && !value["ForwardProtocol"].IsNull())
    {
        if (!value["ForwardProtocol"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `L7ListenerInfo.ForwardProtocol` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_forwardProtocol = value["ForwardProtocol"].GetInt64();
        m_forwardProtocolHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void L7ListenerInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_addTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addTimestamp.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ruleSet.begin(); itr != m_ruleSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_forwardProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForwardProtocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_forwardProtocol, allocator);
    }

}


string L7ListenerInfo::GetListenerId() const
{
    return m_listenerId;
}

void L7ListenerInfo::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool L7ListenerInfo::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

string L7ListenerInfo::GetListenerName() const
{
    return m_listenerName;
}

void L7ListenerInfo::SetListenerName(const string& _listenerName)
{
    m_listenerName = _listenerName;
    m_listenerNameHasBeenSet = true;
}

bool L7ListenerInfo::ListenerNameHasBeenSet() const
{
    return m_listenerNameHasBeenSet;
}

string L7ListenerInfo::GetProtocol() const
{
    return m_protocol;
}

void L7ListenerInfo::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool L7ListenerInfo::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

int64_t L7ListenerInfo::GetLoadBalancerPort() const
{
    return m_loadBalancerPort;
}

void L7ListenerInfo::SetLoadBalancerPort(const int64_t& _loadBalancerPort)
{
    m_loadBalancerPort = _loadBalancerPort;
    m_loadBalancerPortHasBeenSet = true;
}

bool L7ListenerInfo::LoadBalancerPortHasBeenSet() const
{
    return m_loadBalancerPortHasBeenSet;
}

int64_t L7ListenerInfo::GetBandwidth() const
{
    return m_bandwidth;
}

void L7ListenerInfo::SetBandwidth(const int64_t& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool L7ListenerInfo::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

string L7ListenerInfo::GetListenerType() const
{
    return m_listenerType;
}

void L7ListenerInfo::SetListenerType(const string& _listenerType)
{
    m_listenerType = _listenerType;
    m_listenerTypeHasBeenSet = true;
}

bool L7ListenerInfo::ListenerTypeHasBeenSet() const
{
    return m_listenerTypeHasBeenSet;
}

int64_t L7ListenerInfo::GetSslMode() const
{
    return m_sslMode;
}

void L7ListenerInfo::SetSslMode(const int64_t& _sslMode)
{
    m_sslMode = _sslMode;
    m_sslModeHasBeenSet = true;
}

bool L7ListenerInfo::SslModeHasBeenSet() const
{
    return m_sslModeHasBeenSet;
}

string L7ListenerInfo::GetCertId() const
{
    return m_certId;
}

void L7ListenerInfo::SetCertId(const string& _certId)
{
    m_certId = _certId;
    m_certIdHasBeenSet = true;
}

bool L7ListenerInfo::CertIdHasBeenSet() const
{
    return m_certIdHasBeenSet;
}

string L7ListenerInfo::GetCertCaId() const
{
    return m_certCaId;
}

void L7ListenerInfo::SetCertCaId(const string& _certCaId)
{
    m_certCaId = _certCaId;
    m_certCaIdHasBeenSet = true;
}

bool L7ListenerInfo::CertCaIdHasBeenSet() const
{
    return m_certCaIdHasBeenSet;
}

int64_t L7ListenerInfo::GetStatus() const
{
    return m_status;
}

void L7ListenerInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool L7ListenerInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string L7ListenerInfo::GetAddTimestamp() const
{
    return m_addTimestamp;
}

void L7ListenerInfo::SetAddTimestamp(const string& _addTimestamp)
{
    m_addTimestamp = _addTimestamp;
    m_addTimestampHasBeenSet = true;
}

bool L7ListenerInfo::AddTimestampHasBeenSet() const
{
    return m_addTimestampHasBeenSet;
}

vector<L7ListenerInfoRule> L7ListenerInfo::GetRuleSet() const
{
    return m_ruleSet;
}

void L7ListenerInfo::SetRuleSet(const vector<L7ListenerInfoRule>& _ruleSet)
{
    m_ruleSet = _ruleSet;
    m_ruleSetHasBeenSet = true;
}

bool L7ListenerInfo::RuleSetHasBeenSet() const
{
    return m_ruleSetHasBeenSet;
}

int64_t L7ListenerInfo::GetForwardProtocol() const
{
    return m_forwardProtocol;
}

void L7ListenerInfo::SetForwardProtocol(const int64_t& _forwardProtocol)
{
    m_forwardProtocol = _forwardProtocol;
    m_forwardProtocolHasBeenSet = true;
}

bool L7ListenerInfo::ForwardProtocolHasBeenSet() const
{
    return m_forwardProtocolHasBeenSet;
}


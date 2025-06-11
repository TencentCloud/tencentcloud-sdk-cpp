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

#include <tencentcloud/clb/v20180317/model/ModifyListenerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

ModifyListenerRequest::ModifyListenerRequest() :
    m_loadBalancerIdHasBeenSet(false),
    m_listenerIdHasBeenSet(false),
    m_listenerNameHasBeenSet(false),
    m_sessionExpireTimeHasBeenSet(false),
    m_healthCheckHasBeenSet(false),
    m_certificateHasBeenSet(false),
    m_schedulerHasBeenSet(false),
    m_sniSwitchHasBeenSet(false),
    m_targetTypeHasBeenSet(false),
    m_keepaliveEnableHasBeenSet(false),
    m_deregisterTargetRstHasBeenSet(false),
    m_sessionTypeHasBeenSet(false),
    m_multiCertInfoHasBeenSet(false),
    m_maxConnHasBeenSet(false),
    m_maxCpsHasBeenSet(false),
    m_idleConnectTimeoutHasBeenSet(false),
    m_proxyProtocolHasBeenSet(false),
    m_snatEnableHasBeenSet(false),
    m_dataCompressModeHasBeenSet(false)
{
}

string ModifyListenerRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_loadBalancerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loadBalancerId.c_str(), allocator).Move(), allocator);
    }

    if (m_listenerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_listenerId.c_str(), allocator).Move(), allocator);
    }

    if (m_listenerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_listenerName.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionExpireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionExpireTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sessionExpireTime, allocator);
    }

    if (m_healthCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheck";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_healthCheck.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_certificateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Certificate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_certificate.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_schedulerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scheduler";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scheduler.c_str(), allocator).Move(), allocator);
    }

    if (m_sniSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SniSwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sniSwitch, allocator);
    }

    if (m_targetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetType.c_str(), allocator).Move(), allocator);
    }

    if (m_keepaliveEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeepaliveEnable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_keepaliveEnable, allocator);
    }

    if (m_deregisterTargetRstHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeregisterTargetRst";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deregisterTargetRst, allocator);
    }

    if (m_sessionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionType.c_str(), allocator).Move(), allocator);
    }

    if (m_multiCertInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiCertInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_multiCertInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_maxConnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxConn";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxConn, allocator);
    }

    if (m_maxCpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxCps";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxCps, allocator);
    }

    if (m_idleConnectTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdleConnectTimeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_idleConnectTimeout, allocator);
    }

    if (m_proxyProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyProtocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_proxyProtocol, allocator);
    }

    if (m_snatEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnatEnable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_snatEnable, allocator);
    }

    if (m_dataCompressModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataCompressMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataCompressMode.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyListenerRequest::GetLoadBalancerId() const
{
    return m_loadBalancerId;
}

void ModifyListenerRequest::SetLoadBalancerId(const string& _loadBalancerId)
{
    m_loadBalancerId = _loadBalancerId;
    m_loadBalancerIdHasBeenSet = true;
}

bool ModifyListenerRequest::LoadBalancerIdHasBeenSet() const
{
    return m_loadBalancerIdHasBeenSet;
}

string ModifyListenerRequest::GetListenerId() const
{
    return m_listenerId;
}

void ModifyListenerRequest::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool ModifyListenerRequest::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

string ModifyListenerRequest::GetListenerName() const
{
    return m_listenerName;
}

void ModifyListenerRequest::SetListenerName(const string& _listenerName)
{
    m_listenerName = _listenerName;
    m_listenerNameHasBeenSet = true;
}

bool ModifyListenerRequest::ListenerNameHasBeenSet() const
{
    return m_listenerNameHasBeenSet;
}

int64_t ModifyListenerRequest::GetSessionExpireTime() const
{
    return m_sessionExpireTime;
}

void ModifyListenerRequest::SetSessionExpireTime(const int64_t& _sessionExpireTime)
{
    m_sessionExpireTime = _sessionExpireTime;
    m_sessionExpireTimeHasBeenSet = true;
}

bool ModifyListenerRequest::SessionExpireTimeHasBeenSet() const
{
    return m_sessionExpireTimeHasBeenSet;
}

HealthCheck ModifyListenerRequest::GetHealthCheck() const
{
    return m_healthCheck;
}

void ModifyListenerRequest::SetHealthCheck(const HealthCheck& _healthCheck)
{
    m_healthCheck = _healthCheck;
    m_healthCheckHasBeenSet = true;
}

bool ModifyListenerRequest::HealthCheckHasBeenSet() const
{
    return m_healthCheckHasBeenSet;
}

CertificateInput ModifyListenerRequest::GetCertificate() const
{
    return m_certificate;
}

void ModifyListenerRequest::SetCertificate(const CertificateInput& _certificate)
{
    m_certificate = _certificate;
    m_certificateHasBeenSet = true;
}

bool ModifyListenerRequest::CertificateHasBeenSet() const
{
    return m_certificateHasBeenSet;
}

string ModifyListenerRequest::GetScheduler() const
{
    return m_scheduler;
}

void ModifyListenerRequest::SetScheduler(const string& _scheduler)
{
    m_scheduler = _scheduler;
    m_schedulerHasBeenSet = true;
}

bool ModifyListenerRequest::SchedulerHasBeenSet() const
{
    return m_schedulerHasBeenSet;
}

int64_t ModifyListenerRequest::GetSniSwitch() const
{
    return m_sniSwitch;
}

void ModifyListenerRequest::SetSniSwitch(const int64_t& _sniSwitch)
{
    m_sniSwitch = _sniSwitch;
    m_sniSwitchHasBeenSet = true;
}

bool ModifyListenerRequest::SniSwitchHasBeenSet() const
{
    return m_sniSwitchHasBeenSet;
}

string ModifyListenerRequest::GetTargetType() const
{
    return m_targetType;
}

void ModifyListenerRequest::SetTargetType(const string& _targetType)
{
    m_targetType = _targetType;
    m_targetTypeHasBeenSet = true;
}

bool ModifyListenerRequest::TargetTypeHasBeenSet() const
{
    return m_targetTypeHasBeenSet;
}

int64_t ModifyListenerRequest::GetKeepaliveEnable() const
{
    return m_keepaliveEnable;
}

void ModifyListenerRequest::SetKeepaliveEnable(const int64_t& _keepaliveEnable)
{
    m_keepaliveEnable = _keepaliveEnable;
    m_keepaliveEnableHasBeenSet = true;
}

bool ModifyListenerRequest::KeepaliveEnableHasBeenSet() const
{
    return m_keepaliveEnableHasBeenSet;
}

bool ModifyListenerRequest::GetDeregisterTargetRst() const
{
    return m_deregisterTargetRst;
}

void ModifyListenerRequest::SetDeregisterTargetRst(const bool& _deregisterTargetRst)
{
    m_deregisterTargetRst = _deregisterTargetRst;
    m_deregisterTargetRstHasBeenSet = true;
}

bool ModifyListenerRequest::DeregisterTargetRstHasBeenSet() const
{
    return m_deregisterTargetRstHasBeenSet;
}

string ModifyListenerRequest::GetSessionType() const
{
    return m_sessionType;
}

void ModifyListenerRequest::SetSessionType(const string& _sessionType)
{
    m_sessionType = _sessionType;
    m_sessionTypeHasBeenSet = true;
}

bool ModifyListenerRequest::SessionTypeHasBeenSet() const
{
    return m_sessionTypeHasBeenSet;
}

MultiCertInfo ModifyListenerRequest::GetMultiCertInfo() const
{
    return m_multiCertInfo;
}

void ModifyListenerRequest::SetMultiCertInfo(const MultiCertInfo& _multiCertInfo)
{
    m_multiCertInfo = _multiCertInfo;
    m_multiCertInfoHasBeenSet = true;
}

bool ModifyListenerRequest::MultiCertInfoHasBeenSet() const
{
    return m_multiCertInfoHasBeenSet;
}

int64_t ModifyListenerRequest::GetMaxConn() const
{
    return m_maxConn;
}

void ModifyListenerRequest::SetMaxConn(const int64_t& _maxConn)
{
    m_maxConn = _maxConn;
    m_maxConnHasBeenSet = true;
}

bool ModifyListenerRequest::MaxConnHasBeenSet() const
{
    return m_maxConnHasBeenSet;
}

int64_t ModifyListenerRequest::GetMaxCps() const
{
    return m_maxCps;
}

void ModifyListenerRequest::SetMaxCps(const int64_t& _maxCps)
{
    m_maxCps = _maxCps;
    m_maxCpsHasBeenSet = true;
}

bool ModifyListenerRequest::MaxCpsHasBeenSet() const
{
    return m_maxCpsHasBeenSet;
}

int64_t ModifyListenerRequest::GetIdleConnectTimeout() const
{
    return m_idleConnectTimeout;
}

void ModifyListenerRequest::SetIdleConnectTimeout(const int64_t& _idleConnectTimeout)
{
    m_idleConnectTimeout = _idleConnectTimeout;
    m_idleConnectTimeoutHasBeenSet = true;
}

bool ModifyListenerRequest::IdleConnectTimeoutHasBeenSet() const
{
    return m_idleConnectTimeoutHasBeenSet;
}

bool ModifyListenerRequest::GetProxyProtocol() const
{
    return m_proxyProtocol;
}

void ModifyListenerRequest::SetProxyProtocol(const bool& _proxyProtocol)
{
    m_proxyProtocol = _proxyProtocol;
    m_proxyProtocolHasBeenSet = true;
}

bool ModifyListenerRequest::ProxyProtocolHasBeenSet() const
{
    return m_proxyProtocolHasBeenSet;
}

bool ModifyListenerRequest::GetSnatEnable() const
{
    return m_snatEnable;
}

void ModifyListenerRequest::SetSnatEnable(const bool& _snatEnable)
{
    m_snatEnable = _snatEnable;
    m_snatEnableHasBeenSet = true;
}

bool ModifyListenerRequest::SnatEnableHasBeenSet() const
{
    return m_snatEnableHasBeenSet;
}

string ModifyListenerRequest::GetDataCompressMode() const
{
    return m_dataCompressMode;
}

void ModifyListenerRequest::SetDataCompressMode(const string& _dataCompressMode)
{
    m_dataCompressMode = _dataCompressMode;
    m_dataCompressModeHasBeenSet = true;
}

bool ModifyListenerRequest::DataCompressModeHasBeenSet() const
{
    return m_dataCompressModeHasBeenSet;
}



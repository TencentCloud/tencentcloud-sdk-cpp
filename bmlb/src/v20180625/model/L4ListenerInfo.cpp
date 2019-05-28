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

#include <tencentcloud/bmlb/v20180625/model/L4ListenerInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bmlb::V20180625::Model;
using namespace rapidjson;
using namespace std;

L4ListenerInfo::L4ListenerInfo() :
    m_listenerIdHasBeenSet(false),
    m_listenerNameHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_loadBalancerPortHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_listenerTypeHasBeenSet(false),
    m_sessionExpireHasBeenSet(false),
    m_healthSwitchHasBeenSet(false),
    m_timeOutHasBeenSet(false),
    m_intervalTimeHasBeenSet(false),
    m_healthNumHasBeenSet(false),
    m_unhealthNumHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_addTimestampHasBeenSet(false)
{
}

CoreInternalOutcome L4ListenerInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ListenerId") && !value["ListenerId"].IsNull())
    {
        if (!value["ListenerId"].IsString())
        {
            return CoreInternalOutcome(Error("response `L4ListenerInfo.ListenerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerId = string(value["ListenerId"].GetString());
        m_listenerIdHasBeenSet = true;
    }

    if (value.HasMember("ListenerName") && !value["ListenerName"].IsNull())
    {
        if (!value["ListenerName"].IsString())
        {
            return CoreInternalOutcome(Error("response `L4ListenerInfo.ListenerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerName = string(value["ListenerName"].GetString());
        m_listenerNameHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Error("response `L4ListenerInfo.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancerPort") && !value["LoadBalancerPort"].IsNull())
    {
        if (!value["LoadBalancerPort"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `L4ListenerInfo.LoadBalancerPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancerPort = value["LoadBalancerPort"].GetInt64();
        m_loadBalancerPortHasBeenSet = true;
    }

    if (value.HasMember("Bandwidth") && !value["Bandwidth"].IsNull())
    {
        if (!value["Bandwidth"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `L4ListenerInfo.Bandwidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidth = value["Bandwidth"].GetInt64();
        m_bandwidthHasBeenSet = true;
    }

    if (value.HasMember("ListenerType") && !value["ListenerType"].IsNull())
    {
        if (!value["ListenerType"].IsString())
        {
            return CoreInternalOutcome(Error("response `L4ListenerInfo.ListenerType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerType = string(value["ListenerType"].GetString());
        m_listenerTypeHasBeenSet = true;
    }

    if (value.HasMember("SessionExpire") && !value["SessionExpire"].IsNull())
    {
        if (!value["SessionExpire"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `L4ListenerInfo.SessionExpire` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sessionExpire = value["SessionExpire"].GetInt64();
        m_sessionExpireHasBeenSet = true;
    }

    if (value.HasMember("HealthSwitch") && !value["HealthSwitch"].IsNull())
    {
        if (!value["HealthSwitch"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `L4ListenerInfo.HealthSwitch` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_healthSwitch = value["HealthSwitch"].GetInt64();
        m_healthSwitchHasBeenSet = true;
    }

    if (value.HasMember("TimeOut") && !value["TimeOut"].IsNull())
    {
        if (!value["TimeOut"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `L4ListenerInfo.TimeOut` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeOut = value["TimeOut"].GetInt64();
        m_timeOutHasBeenSet = true;
    }

    if (value.HasMember("IntervalTime") && !value["IntervalTime"].IsNull())
    {
        if (!value["IntervalTime"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `L4ListenerInfo.IntervalTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_intervalTime = value["IntervalTime"].GetInt64();
        m_intervalTimeHasBeenSet = true;
    }

    if (value.HasMember("HealthNum") && !value["HealthNum"].IsNull())
    {
        if (!value["HealthNum"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `L4ListenerInfo.HealthNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_healthNum = value["HealthNum"].GetInt64();
        m_healthNumHasBeenSet = true;
    }

    if (value.HasMember("UnhealthNum") && !value["UnhealthNum"].IsNull())
    {
        if (!value["UnhealthNum"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `L4ListenerInfo.UnhealthNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_unhealthNum = value["UnhealthNum"].GetInt64();
        m_unhealthNumHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `L4ListenerInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("AddTimestamp") && !value["AddTimestamp"].IsNull())
    {
        if (!value["AddTimestamp"].IsString())
        {
            return CoreInternalOutcome(Error("response `L4ListenerInfo.AddTimestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addTimestamp = string(value["AddTimestamp"].GetString());
        m_addTimestampHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void L4ListenerInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_listenerIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ListenerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_listenerId.c_str(), allocator).Move(), allocator);
    }

    if (m_listenerNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ListenerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_listenerName.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerPortHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LoadBalancerPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loadBalancerPort, allocator);
    }

    if (m_bandwidthHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Bandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bandwidth, allocator);
    }

    if (m_listenerTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ListenerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_listenerType.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionExpireHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SessionExpire";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sessionExpire, allocator);
    }

    if (m_healthSwitchHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "HealthSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthSwitch, allocator);
    }

    if (m_timeOutHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TimeOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeOut, allocator);
    }

    if (m_intervalTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IntervalTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_intervalTime, allocator);
    }

    if (m_healthNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "HealthNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthNum, allocator);
    }

    if (m_unhealthNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UnhealthNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unhealthNum, allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_addTimestampHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AddTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_addTimestamp.c_str(), allocator).Move(), allocator);
    }

}


string L4ListenerInfo::GetListenerId() const
{
    return m_listenerId;
}

void L4ListenerInfo::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool L4ListenerInfo::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

string L4ListenerInfo::GetListenerName() const
{
    return m_listenerName;
}

void L4ListenerInfo::SetListenerName(const string& _listenerName)
{
    m_listenerName = _listenerName;
    m_listenerNameHasBeenSet = true;
}

bool L4ListenerInfo::ListenerNameHasBeenSet() const
{
    return m_listenerNameHasBeenSet;
}

string L4ListenerInfo::GetProtocol() const
{
    return m_protocol;
}

void L4ListenerInfo::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool L4ListenerInfo::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

int64_t L4ListenerInfo::GetLoadBalancerPort() const
{
    return m_loadBalancerPort;
}

void L4ListenerInfo::SetLoadBalancerPort(const int64_t& _loadBalancerPort)
{
    m_loadBalancerPort = _loadBalancerPort;
    m_loadBalancerPortHasBeenSet = true;
}

bool L4ListenerInfo::LoadBalancerPortHasBeenSet() const
{
    return m_loadBalancerPortHasBeenSet;
}

int64_t L4ListenerInfo::GetBandwidth() const
{
    return m_bandwidth;
}

void L4ListenerInfo::SetBandwidth(const int64_t& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool L4ListenerInfo::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

string L4ListenerInfo::GetListenerType() const
{
    return m_listenerType;
}

void L4ListenerInfo::SetListenerType(const string& _listenerType)
{
    m_listenerType = _listenerType;
    m_listenerTypeHasBeenSet = true;
}

bool L4ListenerInfo::ListenerTypeHasBeenSet() const
{
    return m_listenerTypeHasBeenSet;
}

int64_t L4ListenerInfo::GetSessionExpire() const
{
    return m_sessionExpire;
}

void L4ListenerInfo::SetSessionExpire(const int64_t& _sessionExpire)
{
    m_sessionExpire = _sessionExpire;
    m_sessionExpireHasBeenSet = true;
}

bool L4ListenerInfo::SessionExpireHasBeenSet() const
{
    return m_sessionExpireHasBeenSet;
}

int64_t L4ListenerInfo::GetHealthSwitch() const
{
    return m_healthSwitch;
}

void L4ListenerInfo::SetHealthSwitch(const int64_t& _healthSwitch)
{
    m_healthSwitch = _healthSwitch;
    m_healthSwitchHasBeenSet = true;
}

bool L4ListenerInfo::HealthSwitchHasBeenSet() const
{
    return m_healthSwitchHasBeenSet;
}

int64_t L4ListenerInfo::GetTimeOut() const
{
    return m_timeOut;
}

void L4ListenerInfo::SetTimeOut(const int64_t& _timeOut)
{
    m_timeOut = _timeOut;
    m_timeOutHasBeenSet = true;
}

bool L4ListenerInfo::TimeOutHasBeenSet() const
{
    return m_timeOutHasBeenSet;
}

int64_t L4ListenerInfo::GetIntervalTime() const
{
    return m_intervalTime;
}

void L4ListenerInfo::SetIntervalTime(const int64_t& _intervalTime)
{
    m_intervalTime = _intervalTime;
    m_intervalTimeHasBeenSet = true;
}

bool L4ListenerInfo::IntervalTimeHasBeenSet() const
{
    return m_intervalTimeHasBeenSet;
}

int64_t L4ListenerInfo::GetHealthNum() const
{
    return m_healthNum;
}

void L4ListenerInfo::SetHealthNum(const int64_t& _healthNum)
{
    m_healthNum = _healthNum;
    m_healthNumHasBeenSet = true;
}

bool L4ListenerInfo::HealthNumHasBeenSet() const
{
    return m_healthNumHasBeenSet;
}

int64_t L4ListenerInfo::GetUnhealthNum() const
{
    return m_unhealthNum;
}

void L4ListenerInfo::SetUnhealthNum(const int64_t& _unhealthNum)
{
    m_unhealthNum = _unhealthNum;
    m_unhealthNumHasBeenSet = true;
}

bool L4ListenerInfo::UnhealthNumHasBeenSet() const
{
    return m_unhealthNumHasBeenSet;
}

int64_t L4ListenerInfo::GetStatus() const
{
    return m_status;
}

void L4ListenerInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool L4ListenerInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string L4ListenerInfo::GetAddTimestamp() const
{
    return m_addTimestamp;
}

void L4ListenerInfo::SetAddTimestamp(const string& _addTimestamp)
{
    m_addTimestamp = _addTimestamp;
    m_addTimestampHasBeenSet = true;
}

bool L4ListenerInfo::AddTimestampHasBeenSet() const
{
    return m_addTimestampHasBeenSet;
}


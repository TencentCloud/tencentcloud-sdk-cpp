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

#include <tencentcloud/gaap/v20180529/model/UDPListener.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

UDPListener::UDPListener() :
    m_listenerIdHasBeenSet(false),
    m_listenerNameHasBeenSet(false),
    m_portHasBeenSet(false),
    m_realServerPortHasBeenSet(false),
    m_realServerTypeHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_listenerStatusHasBeenSet(false),
    m_schedulerHasBeenSet(false),
    m_bindStatusHasBeenSet(false),
    m_realServerSetHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_sessionPersistHasBeenSet(false),
    m_delayLoopHasBeenSet(false),
    m_connectTimeoutHasBeenSet(false),
    m_healthyThresholdHasBeenSet(false),
    m_unhealthyThresholdHasBeenSet(false),
    m_failoverSwitchHasBeenSet(false),
    m_healthCheckHasBeenSet(false),
    m_checkTypeHasBeenSet(false),
    m_checkPortHasBeenSet(false),
    m_contextTypeHasBeenSet(false),
    m_sendContextHasBeenSet(false),
    m_recvContextHasBeenSet(false),
    m_proxyIdHasBeenSet(false),
    m_groupIdHasBeenSet(false)
{
}

CoreInternalOutcome UDPListener::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ListenerId") && !value["ListenerId"].IsNull())
    {
        if (!value["ListenerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UDPListener.ListenerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerId = string(value["ListenerId"].GetString());
        m_listenerIdHasBeenSet = true;
    }

    if (value.HasMember("ListenerName") && !value["ListenerName"].IsNull())
    {
        if (!value["ListenerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UDPListener.ListenerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerName = string(value["ListenerName"].GetString());
        m_listenerNameHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UDPListener.Port` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetUint64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("RealServerPort") && !value["RealServerPort"].IsNull())
    {
        if (!value["RealServerPort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UDPListener.RealServerPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_realServerPort = value["RealServerPort"].GetUint64();
        m_realServerPortHasBeenSet = true;
    }

    if (value.HasMember("RealServerType") && !value["RealServerType"].IsNull())
    {
        if (!value["RealServerType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UDPListener.RealServerType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realServerType = string(value["RealServerType"].GetString());
        m_realServerTypeHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UDPListener.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("ListenerStatus") && !value["ListenerStatus"].IsNull())
    {
        if (!value["ListenerStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UDPListener.ListenerStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_listenerStatus = value["ListenerStatus"].GetUint64();
        m_listenerStatusHasBeenSet = true;
    }

    if (value.HasMember("Scheduler") && !value["Scheduler"].IsNull())
    {
        if (!value["Scheduler"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UDPListener.Scheduler` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheduler = string(value["Scheduler"].GetString());
        m_schedulerHasBeenSet = true;
    }

    if (value.HasMember("BindStatus") && !value["BindStatus"].IsNull())
    {
        if (!value["BindStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UDPListener.BindStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bindStatus = value["BindStatus"].GetUint64();
        m_bindStatusHasBeenSet = true;
    }

    if (value.HasMember("RealServerSet") && !value["RealServerSet"].IsNull())
    {
        if (!value["RealServerSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UDPListener.RealServerSet` is not array type"));

        const rapidjson::Value &tmpValue = value["RealServerSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BindRealServer item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_realServerSet.push_back(item);
        }
        m_realServerSetHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UDPListener.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("SessionPersist") && !value["SessionPersist"].IsNull())
    {
        if (!value["SessionPersist"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UDPListener.SessionPersist` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sessionPersist = value["SessionPersist"].GetUint64();
        m_sessionPersistHasBeenSet = true;
    }

    if (value.HasMember("DelayLoop") && !value["DelayLoop"].IsNull())
    {
        if (!value["DelayLoop"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UDPListener.DelayLoop` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_delayLoop = value["DelayLoop"].GetUint64();
        m_delayLoopHasBeenSet = true;
    }

    if (value.HasMember("ConnectTimeout") && !value["ConnectTimeout"].IsNull())
    {
        if (!value["ConnectTimeout"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UDPListener.ConnectTimeout` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_connectTimeout = value["ConnectTimeout"].GetUint64();
        m_connectTimeoutHasBeenSet = true;
    }

    if (value.HasMember("HealthyThreshold") && !value["HealthyThreshold"].IsNull())
    {
        if (!value["HealthyThreshold"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UDPListener.HealthyThreshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_healthyThreshold = value["HealthyThreshold"].GetUint64();
        m_healthyThresholdHasBeenSet = true;
    }

    if (value.HasMember("UnhealthyThreshold") && !value["UnhealthyThreshold"].IsNull())
    {
        if (!value["UnhealthyThreshold"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UDPListener.UnhealthyThreshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_unhealthyThreshold = value["UnhealthyThreshold"].GetUint64();
        m_unhealthyThresholdHasBeenSet = true;
    }

    if (value.HasMember("FailoverSwitch") && !value["FailoverSwitch"].IsNull())
    {
        if (!value["FailoverSwitch"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UDPListener.FailoverSwitch` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_failoverSwitch = value["FailoverSwitch"].GetInt64();
        m_failoverSwitchHasBeenSet = true;
    }

    if (value.HasMember("HealthCheck") && !value["HealthCheck"].IsNull())
    {
        if (!value["HealthCheck"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UDPListener.HealthCheck` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_healthCheck = value["HealthCheck"].GetUint64();
        m_healthCheckHasBeenSet = true;
    }

    if (value.HasMember("CheckType") && !value["CheckType"].IsNull())
    {
        if (!value["CheckType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UDPListener.CheckType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkType = string(value["CheckType"].GetString());
        m_checkTypeHasBeenSet = true;
    }

    if (value.HasMember("CheckPort") && !value["CheckPort"].IsNull())
    {
        if (!value["CheckPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UDPListener.CheckPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_checkPort = value["CheckPort"].GetInt64();
        m_checkPortHasBeenSet = true;
    }

    if (value.HasMember("ContextType") && !value["ContextType"].IsNull())
    {
        if (!value["ContextType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UDPListener.ContextType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contextType = string(value["ContextType"].GetString());
        m_contextTypeHasBeenSet = true;
    }

    if (value.HasMember("SendContext") && !value["SendContext"].IsNull())
    {
        if (!value["SendContext"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UDPListener.SendContext` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sendContext = string(value["SendContext"].GetString());
        m_sendContextHasBeenSet = true;
    }

    if (value.HasMember("RecvContext") && !value["RecvContext"].IsNull())
    {
        if (!value["RecvContext"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UDPListener.RecvContext` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recvContext = string(value["RecvContext"].GetString());
        m_recvContextHasBeenSet = true;
    }

    if (value.HasMember("ProxyId") && !value["ProxyId"].IsNull())
    {
        if (!value["ProxyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UDPListener.ProxyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyId = string(value["ProxyId"].GetString());
        m_proxyIdHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UDPListener.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UDPListener::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_realServerPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealServerPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_realServerPort, allocator);
    }

    if (m_realServerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealServerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realServerType.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_listenerStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_listenerStatus, allocator);
    }

    if (m_schedulerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scheduler";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheduler.c_str(), allocator).Move(), allocator);
    }

    if (m_bindStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bindStatus, allocator);
    }

    if (m_realServerSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealServerSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_realServerSet.begin(); itr != m_realServerSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_sessionPersistHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionPersist";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sessionPersist, allocator);
    }

    if (m_delayLoopHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DelayLoop";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_delayLoop, allocator);
    }

    if (m_connectTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_connectTimeout, allocator);
    }

    if (m_healthyThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthyThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthyThreshold, allocator);
    }

    if (m_unhealthyThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnhealthyThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unhealthyThreshold, allocator);
    }

    if (m_failoverSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailoverSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failoverSwitch, allocator);
    }

    if (m_healthCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthCheck, allocator);
    }

    if (m_checkTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkType.c_str(), allocator).Move(), allocator);
    }

    if (m_checkPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_checkPort, allocator);
    }

    if (m_contextTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContextType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contextType.c_str(), allocator).Move(), allocator);
    }

    if (m_sendContextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SendContext";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sendContext.c_str(), allocator).Move(), allocator);
    }

    if (m_recvContextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecvContext";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recvContext.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proxyId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

}


string UDPListener::GetListenerId() const
{
    return m_listenerId;
}

void UDPListener::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool UDPListener::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

string UDPListener::GetListenerName() const
{
    return m_listenerName;
}

void UDPListener::SetListenerName(const string& _listenerName)
{
    m_listenerName = _listenerName;
    m_listenerNameHasBeenSet = true;
}

bool UDPListener::ListenerNameHasBeenSet() const
{
    return m_listenerNameHasBeenSet;
}

uint64_t UDPListener::GetPort() const
{
    return m_port;
}

void UDPListener::SetPort(const uint64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool UDPListener::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

uint64_t UDPListener::GetRealServerPort() const
{
    return m_realServerPort;
}

void UDPListener::SetRealServerPort(const uint64_t& _realServerPort)
{
    m_realServerPort = _realServerPort;
    m_realServerPortHasBeenSet = true;
}

bool UDPListener::RealServerPortHasBeenSet() const
{
    return m_realServerPortHasBeenSet;
}

string UDPListener::GetRealServerType() const
{
    return m_realServerType;
}

void UDPListener::SetRealServerType(const string& _realServerType)
{
    m_realServerType = _realServerType;
    m_realServerTypeHasBeenSet = true;
}

bool UDPListener::RealServerTypeHasBeenSet() const
{
    return m_realServerTypeHasBeenSet;
}

string UDPListener::GetProtocol() const
{
    return m_protocol;
}

void UDPListener::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool UDPListener::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

uint64_t UDPListener::GetListenerStatus() const
{
    return m_listenerStatus;
}

void UDPListener::SetListenerStatus(const uint64_t& _listenerStatus)
{
    m_listenerStatus = _listenerStatus;
    m_listenerStatusHasBeenSet = true;
}

bool UDPListener::ListenerStatusHasBeenSet() const
{
    return m_listenerStatusHasBeenSet;
}

string UDPListener::GetScheduler() const
{
    return m_scheduler;
}

void UDPListener::SetScheduler(const string& _scheduler)
{
    m_scheduler = _scheduler;
    m_schedulerHasBeenSet = true;
}

bool UDPListener::SchedulerHasBeenSet() const
{
    return m_schedulerHasBeenSet;
}

uint64_t UDPListener::GetBindStatus() const
{
    return m_bindStatus;
}

void UDPListener::SetBindStatus(const uint64_t& _bindStatus)
{
    m_bindStatus = _bindStatus;
    m_bindStatusHasBeenSet = true;
}

bool UDPListener::BindStatusHasBeenSet() const
{
    return m_bindStatusHasBeenSet;
}

vector<BindRealServer> UDPListener::GetRealServerSet() const
{
    return m_realServerSet;
}

void UDPListener::SetRealServerSet(const vector<BindRealServer>& _realServerSet)
{
    m_realServerSet = _realServerSet;
    m_realServerSetHasBeenSet = true;
}

bool UDPListener::RealServerSetHasBeenSet() const
{
    return m_realServerSetHasBeenSet;
}

uint64_t UDPListener::GetCreateTime() const
{
    return m_createTime;
}

void UDPListener::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool UDPListener::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t UDPListener::GetSessionPersist() const
{
    return m_sessionPersist;
}

void UDPListener::SetSessionPersist(const uint64_t& _sessionPersist)
{
    m_sessionPersist = _sessionPersist;
    m_sessionPersistHasBeenSet = true;
}

bool UDPListener::SessionPersistHasBeenSet() const
{
    return m_sessionPersistHasBeenSet;
}

uint64_t UDPListener::GetDelayLoop() const
{
    return m_delayLoop;
}

void UDPListener::SetDelayLoop(const uint64_t& _delayLoop)
{
    m_delayLoop = _delayLoop;
    m_delayLoopHasBeenSet = true;
}

bool UDPListener::DelayLoopHasBeenSet() const
{
    return m_delayLoopHasBeenSet;
}

uint64_t UDPListener::GetConnectTimeout() const
{
    return m_connectTimeout;
}

void UDPListener::SetConnectTimeout(const uint64_t& _connectTimeout)
{
    m_connectTimeout = _connectTimeout;
    m_connectTimeoutHasBeenSet = true;
}

bool UDPListener::ConnectTimeoutHasBeenSet() const
{
    return m_connectTimeoutHasBeenSet;
}

uint64_t UDPListener::GetHealthyThreshold() const
{
    return m_healthyThreshold;
}

void UDPListener::SetHealthyThreshold(const uint64_t& _healthyThreshold)
{
    m_healthyThreshold = _healthyThreshold;
    m_healthyThresholdHasBeenSet = true;
}

bool UDPListener::HealthyThresholdHasBeenSet() const
{
    return m_healthyThresholdHasBeenSet;
}

uint64_t UDPListener::GetUnhealthyThreshold() const
{
    return m_unhealthyThreshold;
}

void UDPListener::SetUnhealthyThreshold(const uint64_t& _unhealthyThreshold)
{
    m_unhealthyThreshold = _unhealthyThreshold;
    m_unhealthyThresholdHasBeenSet = true;
}

bool UDPListener::UnhealthyThresholdHasBeenSet() const
{
    return m_unhealthyThresholdHasBeenSet;
}

int64_t UDPListener::GetFailoverSwitch() const
{
    return m_failoverSwitch;
}

void UDPListener::SetFailoverSwitch(const int64_t& _failoverSwitch)
{
    m_failoverSwitch = _failoverSwitch;
    m_failoverSwitchHasBeenSet = true;
}

bool UDPListener::FailoverSwitchHasBeenSet() const
{
    return m_failoverSwitchHasBeenSet;
}

uint64_t UDPListener::GetHealthCheck() const
{
    return m_healthCheck;
}

void UDPListener::SetHealthCheck(const uint64_t& _healthCheck)
{
    m_healthCheck = _healthCheck;
    m_healthCheckHasBeenSet = true;
}

bool UDPListener::HealthCheckHasBeenSet() const
{
    return m_healthCheckHasBeenSet;
}

string UDPListener::GetCheckType() const
{
    return m_checkType;
}

void UDPListener::SetCheckType(const string& _checkType)
{
    m_checkType = _checkType;
    m_checkTypeHasBeenSet = true;
}

bool UDPListener::CheckTypeHasBeenSet() const
{
    return m_checkTypeHasBeenSet;
}

int64_t UDPListener::GetCheckPort() const
{
    return m_checkPort;
}

void UDPListener::SetCheckPort(const int64_t& _checkPort)
{
    m_checkPort = _checkPort;
    m_checkPortHasBeenSet = true;
}

bool UDPListener::CheckPortHasBeenSet() const
{
    return m_checkPortHasBeenSet;
}

string UDPListener::GetContextType() const
{
    return m_contextType;
}

void UDPListener::SetContextType(const string& _contextType)
{
    m_contextType = _contextType;
    m_contextTypeHasBeenSet = true;
}

bool UDPListener::ContextTypeHasBeenSet() const
{
    return m_contextTypeHasBeenSet;
}

string UDPListener::GetSendContext() const
{
    return m_sendContext;
}

void UDPListener::SetSendContext(const string& _sendContext)
{
    m_sendContext = _sendContext;
    m_sendContextHasBeenSet = true;
}

bool UDPListener::SendContextHasBeenSet() const
{
    return m_sendContextHasBeenSet;
}

string UDPListener::GetRecvContext() const
{
    return m_recvContext;
}

void UDPListener::SetRecvContext(const string& _recvContext)
{
    m_recvContext = _recvContext;
    m_recvContextHasBeenSet = true;
}

bool UDPListener::RecvContextHasBeenSet() const
{
    return m_recvContextHasBeenSet;
}

string UDPListener::GetProxyId() const
{
    return m_proxyId;
}

void UDPListener::SetProxyId(const string& _proxyId)
{
    m_proxyId = _proxyId;
    m_proxyIdHasBeenSet = true;
}

bool UDPListener::ProxyIdHasBeenSet() const
{
    return m_proxyIdHasBeenSet;
}

string UDPListener::GetGroupId() const
{
    return m_groupId;
}

void UDPListener::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool UDPListener::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}


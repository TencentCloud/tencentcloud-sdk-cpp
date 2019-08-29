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

#include <tencentcloud/gaap/v20180529/model/TCPListener.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gaap::V20180529::Model;
using namespace rapidjson;
using namespace std;

TCPListener::TCPListener() :
    m_listenerIdHasBeenSet(false),
    m_listenerNameHasBeenSet(false),
    m_portHasBeenSet(false),
    m_realServerPortHasBeenSet(false),
    m_realServerTypeHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_listenerStatusHasBeenSet(false),
    m_schedulerHasBeenSet(false),
    m_connectTimeoutHasBeenSet(false),
    m_delayLoopHasBeenSet(false),
    m_healthCheckHasBeenSet(false),
    m_bindStatusHasBeenSet(false),
    m_realServerSetHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome TCPListener::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ListenerId") && !value["ListenerId"].IsNull())
    {
        if (!value["ListenerId"].IsString())
        {
            return CoreInternalOutcome(Error("response `TCPListener.ListenerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerId = string(value["ListenerId"].GetString());
        m_listenerIdHasBeenSet = true;
    }

    if (value.HasMember("ListenerName") && !value["ListenerName"].IsNull())
    {
        if (!value["ListenerName"].IsString())
        {
            return CoreInternalOutcome(Error("response `TCPListener.ListenerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerName = string(value["ListenerName"].GetString());
        m_listenerNameHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TCPListener.Port` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetUint64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("RealServerPort") && !value["RealServerPort"].IsNull())
    {
        if (!value["RealServerPort"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TCPListener.RealServerPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_realServerPort = value["RealServerPort"].GetUint64();
        m_realServerPortHasBeenSet = true;
    }

    if (value.HasMember("RealServerType") && !value["RealServerType"].IsNull())
    {
        if (!value["RealServerType"].IsString())
        {
            return CoreInternalOutcome(Error("response `TCPListener.RealServerType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realServerType = string(value["RealServerType"].GetString());
        m_realServerTypeHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Error("response `TCPListener.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("ListenerStatus") && !value["ListenerStatus"].IsNull())
    {
        if (!value["ListenerStatus"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TCPListener.ListenerStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_listenerStatus = value["ListenerStatus"].GetUint64();
        m_listenerStatusHasBeenSet = true;
    }

    if (value.HasMember("Scheduler") && !value["Scheduler"].IsNull())
    {
        if (!value["Scheduler"].IsString())
        {
            return CoreInternalOutcome(Error("response `TCPListener.Scheduler` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheduler = string(value["Scheduler"].GetString());
        m_schedulerHasBeenSet = true;
    }

    if (value.HasMember("ConnectTimeout") && !value["ConnectTimeout"].IsNull())
    {
        if (!value["ConnectTimeout"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TCPListener.ConnectTimeout` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_connectTimeout = value["ConnectTimeout"].GetUint64();
        m_connectTimeoutHasBeenSet = true;
    }

    if (value.HasMember("DelayLoop") && !value["DelayLoop"].IsNull())
    {
        if (!value["DelayLoop"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TCPListener.DelayLoop` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_delayLoop = value["DelayLoop"].GetUint64();
        m_delayLoopHasBeenSet = true;
    }

    if (value.HasMember("HealthCheck") && !value["HealthCheck"].IsNull())
    {
        if (!value["HealthCheck"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TCPListener.HealthCheck` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_healthCheck = value["HealthCheck"].GetUint64();
        m_healthCheckHasBeenSet = true;
    }

    if (value.HasMember("BindStatus") && !value["BindStatus"].IsNull())
    {
        if (!value["BindStatus"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TCPListener.BindStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bindStatus = value["BindStatus"].GetUint64();
        m_bindStatusHasBeenSet = true;
    }

    if (value.HasMember("RealServerSet") && !value["RealServerSet"].IsNull())
    {
        if (!value["RealServerSet"].IsArray())
            return CoreInternalOutcome(Error("response `TCPListener.RealServerSet` is not array type"));

        const Value &tmpValue = value["RealServerSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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
            return CoreInternalOutcome(Error("response `TCPListener.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TCPListener::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
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

    if (m_portHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_realServerPortHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RealServerPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_realServerPort, allocator);
    }

    if (m_realServerTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RealServerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_realServerType.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_listenerStatusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ListenerStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_listenerStatus, allocator);
    }

    if (m_schedulerHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Scheduler";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_scheduler.c_str(), allocator).Move(), allocator);
    }

    if (m_connectTimeoutHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ConnectTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_connectTimeout, allocator);
    }

    if (m_delayLoopHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DelayLoop";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_delayLoop, allocator);
    }

    if (m_healthCheckHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "HealthCheck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthCheck, allocator);
    }

    if (m_bindStatusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BindStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bindStatus, allocator);
    }

    if (m_realServerSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RealServerSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_realServerSet.begin(); itr != m_realServerSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

}


string TCPListener::GetListenerId() const
{
    return m_listenerId;
}

void TCPListener::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool TCPListener::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

string TCPListener::GetListenerName() const
{
    return m_listenerName;
}

void TCPListener::SetListenerName(const string& _listenerName)
{
    m_listenerName = _listenerName;
    m_listenerNameHasBeenSet = true;
}

bool TCPListener::ListenerNameHasBeenSet() const
{
    return m_listenerNameHasBeenSet;
}

uint64_t TCPListener::GetPort() const
{
    return m_port;
}

void TCPListener::SetPort(const uint64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool TCPListener::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

uint64_t TCPListener::GetRealServerPort() const
{
    return m_realServerPort;
}

void TCPListener::SetRealServerPort(const uint64_t& _realServerPort)
{
    m_realServerPort = _realServerPort;
    m_realServerPortHasBeenSet = true;
}

bool TCPListener::RealServerPortHasBeenSet() const
{
    return m_realServerPortHasBeenSet;
}

string TCPListener::GetRealServerType() const
{
    return m_realServerType;
}

void TCPListener::SetRealServerType(const string& _realServerType)
{
    m_realServerType = _realServerType;
    m_realServerTypeHasBeenSet = true;
}

bool TCPListener::RealServerTypeHasBeenSet() const
{
    return m_realServerTypeHasBeenSet;
}

string TCPListener::GetProtocol() const
{
    return m_protocol;
}

void TCPListener::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool TCPListener::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

uint64_t TCPListener::GetListenerStatus() const
{
    return m_listenerStatus;
}

void TCPListener::SetListenerStatus(const uint64_t& _listenerStatus)
{
    m_listenerStatus = _listenerStatus;
    m_listenerStatusHasBeenSet = true;
}

bool TCPListener::ListenerStatusHasBeenSet() const
{
    return m_listenerStatusHasBeenSet;
}

string TCPListener::GetScheduler() const
{
    return m_scheduler;
}

void TCPListener::SetScheduler(const string& _scheduler)
{
    m_scheduler = _scheduler;
    m_schedulerHasBeenSet = true;
}

bool TCPListener::SchedulerHasBeenSet() const
{
    return m_schedulerHasBeenSet;
}

uint64_t TCPListener::GetConnectTimeout() const
{
    return m_connectTimeout;
}

void TCPListener::SetConnectTimeout(const uint64_t& _connectTimeout)
{
    m_connectTimeout = _connectTimeout;
    m_connectTimeoutHasBeenSet = true;
}

bool TCPListener::ConnectTimeoutHasBeenSet() const
{
    return m_connectTimeoutHasBeenSet;
}

uint64_t TCPListener::GetDelayLoop() const
{
    return m_delayLoop;
}

void TCPListener::SetDelayLoop(const uint64_t& _delayLoop)
{
    m_delayLoop = _delayLoop;
    m_delayLoopHasBeenSet = true;
}

bool TCPListener::DelayLoopHasBeenSet() const
{
    return m_delayLoopHasBeenSet;
}

uint64_t TCPListener::GetHealthCheck() const
{
    return m_healthCheck;
}

void TCPListener::SetHealthCheck(const uint64_t& _healthCheck)
{
    m_healthCheck = _healthCheck;
    m_healthCheckHasBeenSet = true;
}

bool TCPListener::HealthCheckHasBeenSet() const
{
    return m_healthCheckHasBeenSet;
}

uint64_t TCPListener::GetBindStatus() const
{
    return m_bindStatus;
}

void TCPListener::SetBindStatus(const uint64_t& _bindStatus)
{
    m_bindStatus = _bindStatus;
    m_bindStatusHasBeenSet = true;
}

bool TCPListener::BindStatusHasBeenSet() const
{
    return m_bindStatusHasBeenSet;
}

vector<BindRealServer> TCPListener::GetRealServerSet() const
{
    return m_realServerSet;
}

void TCPListener::SetRealServerSet(const vector<BindRealServer>& _realServerSet)
{
    m_realServerSet = _realServerSet;
    m_realServerSetHasBeenSet = true;
}

bool TCPListener::RealServerSetHasBeenSet() const
{
    return m_realServerSetHasBeenSet;
}

uint64_t TCPListener::GetCreateTime() const
{
    return m_createTime;
}

void TCPListener::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TCPListener::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}


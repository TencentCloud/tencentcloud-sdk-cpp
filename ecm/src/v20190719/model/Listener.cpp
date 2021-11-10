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

#include <tencentcloud/ecm/v20190719/model/Listener.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

Listener::Listener() :
    m_listenerIdHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_portHasBeenSet(false),
    m_healthCheckHasBeenSet(false),
    m_schedulerHasBeenSet(false),
    m_sessionExpireTimeHasBeenSet(false),
    m_listenerNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_sessionTypeHasBeenSet(false),
    m_endPortHasBeenSet(false)
{
}

CoreInternalOutcome Listener::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ListenerId") && !value["ListenerId"].IsNull())
    {
        if (!value["ListenerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Listener.ListenerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerId = string(value["ListenerId"].GetString());
        m_listenerIdHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Listener.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Listener.Port` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetInt64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("HealthCheck") && !value["HealthCheck"].IsNull())
    {
        if (!value["HealthCheck"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Listener.HealthCheck` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_healthCheck.Deserialize(value["HealthCheck"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_healthCheckHasBeenSet = true;
    }

    if (value.HasMember("Scheduler") && !value["Scheduler"].IsNull())
    {
        if (!value["Scheduler"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Listener.Scheduler` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheduler = string(value["Scheduler"].GetString());
        m_schedulerHasBeenSet = true;
    }

    if (value.HasMember("SessionExpireTime") && !value["SessionExpireTime"].IsNull())
    {
        if (!value["SessionExpireTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Listener.SessionExpireTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sessionExpireTime = value["SessionExpireTime"].GetInt64();
        m_sessionExpireTimeHasBeenSet = true;
    }

    if (value.HasMember("ListenerName") && !value["ListenerName"].IsNull())
    {
        if (!value["ListenerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Listener.ListenerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerName = string(value["ListenerName"].GetString());
        m_listenerNameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Listener.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("SessionType") && !value["SessionType"].IsNull())
    {
        if (!value["SessionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Listener.SessionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionType = string(value["SessionType"].GetString());
        m_sessionTypeHasBeenSet = true;
    }

    if (value.HasMember("EndPort") && !value["EndPort"].IsNull())
    {
        if (!value["EndPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Listener.EndPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endPort = value["EndPort"].GetInt64();
        m_endPortHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Listener::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_listenerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_listenerId.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_healthCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_healthCheck.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_schedulerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scheduler";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheduler.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionExpireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sessionExpireTime, allocator);
    }

    if (m_listenerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_listenerName.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionType.c_str(), allocator).Move(), allocator);
    }

    if (m_endPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endPort, allocator);
    }

}


string Listener::GetListenerId() const
{
    return m_listenerId;
}

void Listener::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool Listener::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

string Listener::GetProtocol() const
{
    return m_protocol;
}

void Listener::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool Listener::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

int64_t Listener::GetPort() const
{
    return m_port;
}

void Listener::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool Listener::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

HealthCheck Listener::GetHealthCheck() const
{
    return m_healthCheck;
}

void Listener::SetHealthCheck(const HealthCheck& _healthCheck)
{
    m_healthCheck = _healthCheck;
    m_healthCheckHasBeenSet = true;
}

bool Listener::HealthCheckHasBeenSet() const
{
    return m_healthCheckHasBeenSet;
}

string Listener::GetScheduler() const
{
    return m_scheduler;
}

void Listener::SetScheduler(const string& _scheduler)
{
    m_scheduler = _scheduler;
    m_schedulerHasBeenSet = true;
}

bool Listener::SchedulerHasBeenSet() const
{
    return m_schedulerHasBeenSet;
}

int64_t Listener::GetSessionExpireTime() const
{
    return m_sessionExpireTime;
}

void Listener::SetSessionExpireTime(const int64_t& _sessionExpireTime)
{
    m_sessionExpireTime = _sessionExpireTime;
    m_sessionExpireTimeHasBeenSet = true;
}

bool Listener::SessionExpireTimeHasBeenSet() const
{
    return m_sessionExpireTimeHasBeenSet;
}

string Listener::GetListenerName() const
{
    return m_listenerName;
}

void Listener::SetListenerName(const string& _listenerName)
{
    m_listenerName = _listenerName;
    m_listenerNameHasBeenSet = true;
}

bool Listener::ListenerNameHasBeenSet() const
{
    return m_listenerNameHasBeenSet;
}

string Listener::GetCreateTime() const
{
    return m_createTime;
}

void Listener::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Listener::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string Listener::GetSessionType() const
{
    return m_sessionType;
}

void Listener::SetSessionType(const string& _sessionType)
{
    m_sessionType = _sessionType;
    m_sessionTypeHasBeenSet = true;
}

bool Listener::SessionTypeHasBeenSet() const
{
    return m_sessionTypeHasBeenSet;
}

int64_t Listener::GetEndPort() const
{
    return m_endPort;
}

void Listener::SetEndPort(const int64_t& _endPort)
{
    m_endPort = _endPort;
    m_endPortHasBeenSet = true;
}

bool Listener::EndPortHasBeenSet() const
{
    return m_endPortHasBeenSet;
}


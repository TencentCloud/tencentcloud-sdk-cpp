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

#include <tencentcloud/tem/v20201221/model/HealthCheckConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tem::V20201221::Model;
using namespace std;

HealthCheckConfig::HealthCheckConfig() :
    m_typeHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_execHasBeenSet(false),
    m_portHasBeenSet(false),
    m_initialDelaySecondsHasBeenSet(false),
    m_timeoutSecondsHasBeenSet(false),
    m_periodSecondsHasBeenSet(false)
{
}

CoreInternalOutcome HealthCheckConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckConfig.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckConfig.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckConfig.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("Exec") && !value["Exec"].IsNull())
    {
        if (!value["Exec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckConfig.Exec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exec = string(value["Exec"].GetString());
        m_execHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckConfig.Port` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetInt64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("InitialDelaySeconds") && !value["InitialDelaySeconds"].IsNull())
    {
        if (!value["InitialDelaySeconds"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckConfig.InitialDelaySeconds` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_initialDelaySeconds = value["InitialDelaySeconds"].GetInt64();
        m_initialDelaySecondsHasBeenSet = true;
    }

    if (value.HasMember("TimeoutSeconds") && !value["TimeoutSeconds"].IsNull())
    {
        if (!value["TimeoutSeconds"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckConfig.TimeoutSeconds` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeoutSeconds = value["TimeoutSeconds"].GetInt64();
        m_timeoutSecondsHasBeenSet = true;
    }

    if (value.HasMember("PeriodSeconds") && !value["PeriodSeconds"].IsNull())
    {
        if (!value["PeriodSeconds"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HealthCheckConfig.PeriodSeconds` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_periodSeconds = value["PeriodSeconds"].GetInt64();
        m_periodSecondsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HealthCheckConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_execHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Exec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exec.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_initialDelaySecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InitialDelaySeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_initialDelaySeconds, allocator);
    }

    if (m_timeoutSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeoutSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeoutSeconds, allocator);
    }

    if (m_periodSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeriodSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_periodSeconds, allocator);
    }

}


string HealthCheckConfig::GetType() const
{
    return m_type;
}

void HealthCheckConfig::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool HealthCheckConfig::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string HealthCheckConfig::GetProtocol() const
{
    return m_protocol;
}

void HealthCheckConfig::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool HealthCheckConfig::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string HealthCheckConfig::GetPath() const
{
    return m_path;
}

void HealthCheckConfig::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool HealthCheckConfig::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string HealthCheckConfig::GetExec() const
{
    return m_exec;
}

void HealthCheckConfig::SetExec(const string& _exec)
{
    m_exec = _exec;
    m_execHasBeenSet = true;
}

bool HealthCheckConfig::ExecHasBeenSet() const
{
    return m_execHasBeenSet;
}

int64_t HealthCheckConfig::GetPort() const
{
    return m_port;
}

void HealthCheckConfig::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool HealthCheckConfig::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

int64_t HealthCheckConfig::GetInitialDelaySeconds() const
{
    return m_initialDelaySeconds;
}

void HealthCheckConfig::SetInitialDelaySeconds(const int64_t& _initialDelaySeconds)
{
    m_initialDelaySeconds = _initialDelaySeconds;
    m_initialDelaySecondsHasBeenSet = true;
}

bool HealthCheckConfig::InitialDelaySecondsHasBeenSet() const
{
    return m_initialDelaySecondsHasBeenSet;
}

int64_t HealthCheckConfig::GetTimeoutSeconds() const
{
    return m_timeoutSeconds;
}

void HealthCheckConfig::SetTimeoutSeconds(const int64_t& _timeoutSeconds)
{
    m_timeoutSeconds = _timeoutSeconds;
    m_timeoutSecondsHasBeenSet = true;
}

bool HealthCheckConfig::TimeoutSecondsHasBeenSet() const
{
    return m_timeoutSecondsHasBeenSet;
}

int64_t HealthCheckConfig::GetPeriodSeconds() const
{
    return m_periodSeconds;
}

void HealthCheckConfig::SetPeriodSeconds(const int64_t& _periodSeconds)
{
    m_periodSeconds = _periodSeconds;
    m_periodSecondsHasBeenSet = true;
}

bool HealthCheckConfig::PeriodSecondsHasBeenSet() const
{
    return m_periodSecondsHasBeenSet;
}


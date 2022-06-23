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

#include <tencentcloud/monitor/v20180724/model/PrometheusAgent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

PrometheusAgent::PrometheusAgent() :
    m_nameHasBeenSet(false),
    m_agentIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_ipv4HasBeenSet(false),
    m_heartbeatTimeHasBeenSet(false),
    m_lastErrorHasBeenSet(false),
    m_agentVersionHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome PrometheusAgent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusAgent.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("AgentId") && !value["AgentId"].IsNull())
    {
        if (!value["AgentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusAgent.AgentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentId = string(value["AgentId"].GetString());
        m_agentIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusAgent.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Ipv4") && !value["Ipv4"].IsNull())
    {
        if (!value["Ipv4"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusAgent.Ipv4` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipv4 = string(value["Ipv4"].GetString());
        m_ipv4HasBeenSet = true;
    }

    if (value.HasMember("HeartbeatTime") && !value["HeartbeatTime"].IsNull())
    {
        if (!value["HeartbeatTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusAgent.HeartbeatTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_heartbeatTime = string(value["HeartbeatTime"].GetString());
        m_heartbeatTimeHasBeenSet = true;
    }

    if (value.HasMember("LastError") && !value["LastError"].IsNull())
    {
        if (!value["LastError"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusAgent.LastError` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastError = string(value["LastError"].GetString());
        m_lastErrorHasBeenSet = true;
    }

    if (value.HasMember("AgentVersion") && !value["AgentVersion"].IsNull())
    {
        if (!value["AgentVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusAgent.AgentVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentVersion = string(value["AgentVersion"].GetString());
        m_agentVersionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusAgent.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrometheusAgent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_agentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_ipv4HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ipv4";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipv4.c_str(), allocator).Move(), allocator);
    }

    if (m_heartbeatTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeartbeatTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_heartbeatTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastErrorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastError";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastError.c_str(), allocator).Move(), allocator);
    }

    if (m_agentVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

}


string PrometheusAgent::GetName() const
{
    return m_name;
}

void PrometheusAgent::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool PrometheusAgent::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string PrometheusAgent::GetAgentId() const
{
    return m_agentId;
}

void PrometheusAgent::SetAgentId(const string& _agentId)
{
    m_agentId = _agentId;
    m_agentIdHasBeenSet = true;
}

bool PrometheusAgent::AgentIdHasBeenSet() const
{
    return m_agentIdHasBeenSet;
}

string PrometheusAgent::GetInstanceId() const
{
    return m_instanceId;
}

void PrometheusAgent::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool PrometheusAgent::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string PrometheusAgent::GetIpv4() const
{
    return m_ipv4;
}

void PrometheusAgent::SetIpv4(const string& _ipv4)
{
    m_ipv4 = _ipv4;
    m_ipv4HasBeenSet = true;
}

bool PrometheusAgent::Ipv4HasBeenSet() const
{
    return m_ipv4HasBeenSet;
}

string PrometheusAgent::GetHeartbeatTime() const
{
    return m_heartbeatTime;
}

void PrometheusAgent::SetHeartbeatTime(const string& _heartbeatTime)
{
    m_heartbeatTime = _heartbeatTime;
    m_heartbeatTimeHasBeenSet = true;
}

bool PrometheusAgent::HeartbeatTimeHasBeenSet() const
{
    return m_heartbeatTimeHasBeenSet;
}

string PrometheusAgent::GetLastError() const
{
    return m_lastError;
}

void PrometheusAgent::SetLastError(const string& _lastError)
{
    m_lastError = _lastError;
    m_lastErrorHasBeenSet = true;
}

bool PrometheusAgent::LastErrorHasBeenSet() const
{
    return m_lastErrorHasBeenSet;
}

string PrometheusAgent::GetAgentVersion() const
{
    return m_agentVersion;
}

void PrometheusAgent::SetAgentVersion(const string& _agentVersion)
{
    m_agentVersion = _agentVersion;
    m_agentVersionHasBeenSet = true;
}

bool PrometheusAgent::AgentVersionHasBeenSet() const
{
    return m_agentVersionHasBeenSet;
}

int64_t PrometheusAgent::GetStatus() const
{
    return m_status;
}

void PrometheusAgent::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool PrometheusAgent::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}


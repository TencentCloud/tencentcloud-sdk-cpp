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

#include <tencentcloud/clb/v20180317/model/ClassicalHealth.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

ClassicalHealth::ClassicalHealth() :
    m_iPHasBeenSet(false),
    m_portHasBeenSet(false),
    m_listenerPortHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_healthStatusHasBeenSet(false)
{
}

CoreInternalOutcome ClassicalHealth::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IP") && !value["IP"].IsNull())
    {
        if (!value["IP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClassicalHealth.IP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iP = string(value["IP"].GetString());
        m_iPHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClassicalHealth.Port` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetInt64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("ListenerPort") && !value["ListenerPort"].IsNull())
    {
        if (!value["ListenerPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClassicalHealth.ListenerPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_listenerPort = value["ListenerPort"].GetInt64();
        m_listenerPortHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClassicalHealth.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("HealthStatus") && !value["HealthStatus"].IsNull())
    {
        if (!value["HealthStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClassicalHealth.HealthStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_healthStatus = value["HealthStatus"].GetInt64();
        m_healthStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClassicalHealth::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iP.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_listenerPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_listenerPort, allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_healthStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthStatus, allocator);
    }

}


string ClassicalHealth::GetIP() const
{
    return m_iP;
}

void ClassicalHealth::SetIP(const string& _iP)
{
    m_iP = _iP;
    m_iPHasBeenSet = true;
}

bool ClassicalHealth::IPHasBeenSet() const
{
    return m_iPHasBeenSet;
}

int64_t ClassicalHealth::GetPort() const
{
    return m_port;
}

void ClassicalHealth::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool ClassicalHealth::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

int64_t ClassicalHealth::GetListenerPort() const
{
    return m_listenerPort;
}

void ClassicalHealth::SetListenerPort(const int64_t& _listenerPort)
{
    m_listenerPort = _listenerPort;
    m_listenerPortHasBeenSet = true;
}

bool ClassicalHealth::ListenerPortHasBeenSet() const
{
    return m_listenerPortHasBeenSet;
}

string ClassicalHealth::GetProtocol() const
{
    return m_protocol;
}

void ClassicalHealth::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool ClassicalHealth::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

int64_t ClassicalHealth::GetHealthStatus() const
{
    return m_healthStatus;
}

void ClassicalHealth::SetHealthStatus(const int64_t& _healthStatus)
{
    m_healthStatus = _healthStatus;
    m_healthStatusHasBeenSet = true;
}

bool ClassicalHealth::HealthStatusHasBeenSet() const
{
    return m_healthStatusHasBeenSet;
}


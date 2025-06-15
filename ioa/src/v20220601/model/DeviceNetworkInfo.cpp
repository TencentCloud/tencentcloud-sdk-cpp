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

#include <tencentcloud/ioa/v20220601/model/DeviceNetworkInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

DeviceNetworkInfo::DeviceNetworkInfo() :
    m_localAddrHasBeenSet(false),
    m_localPortHasBeenSet(false),
    m_processIdHasBeenSet(false),
    m_processNameHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_remoteAddrHasBeenSet(false),
    m_remotePortHasBeenSet(false),
    m_stateHasBeenSet(false)
{
}

CoreInternalOutcome DeviceNetworkInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LocalAddr") && !value["LocalAddr"].IsNull())
    {
        if (!value["LocalAddr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceNetworkInfo.LocalAddr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_localAddr = string(value["LocalAddr"].GetString());
        m_localAddrHasBeenSet = true;
    }

    if (value.HasMember("LocalPort") && !value["LocalPort"].IsNull())
    {
        if (!value["LocalPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceNetworkInfo.LocalPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_localPort = value["LocalPort"].GetInt64();
        m_localPortHasBeenSet = true;
    }

    if (value.HasMember("ProcessId") && !value["ProcessId"].IsNull())
    {
        if (!value["ProcessId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceNetworkInfo.ProcessId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_processId = value["ProcessId"].GetInt64();
        m_processIdHasBeenSet = true;
    }

    if (value.HasMember("ProcessName") && !value["ProcessName"].IsNull())
    {
        if (!value["ProcessName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceNetworkInfo.ProcessName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processName = string(value["ProcessName"].GetString());
        m_processNameHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceNetworkInfo.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("RemoteAddr") && !value["RemoteAddr"].IsNull())
    {
        if (!value["RemoteAddr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceNetworkInfo.RemoteAddr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remoteAddr = string(value["RemoteAddr"].GetString());
        m_remoteAddrHasBeenSet = true;
    }

    if (value.HasMember("RemotePort") && !value["RemotePort"].IsNull())
    {
        if (!value["RemotePort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceNetworkInfo.RemotePort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_remotePort = value["RemotePort"].GetInt64();
        m_remotePortHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceNetworkInfo.State` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_state = value["State"].GetInt64();
        m_stateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceNetworkInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_localAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_localAddr.c_str(), allocator).Move(), allocator);
    }

    if (m_localPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_localPort, allocator);
    }

    if (m_processIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_processId, allocator);
    }

    if (m_processNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processName.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_remoteAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remoteAddr.c_str(), allocator).Move(), allocator);
    }

    if (m_remotePortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemotePort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remotePort, allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_state, allocator);
    }

}


string DeviceNetworkInfo::GetLocalAddr() const
{
    return m_localAddr;
}

void DeviceNetworkInfo::SetLocalAddr(const string& _localAddr)
{
    m_localAddr = _localAddr;
    m_localAddrHasBeenSet = true;
}

bool DeviceNetworkInfo::LocalAddrHasBeenSet() const
{
    return m_localAddrHasBeenSet;
}

int64_t DeviceNetworkInfo::GetLocalPort() const
{
    return m_localPort;
}

void DeviceNetworkInfo::SetLocalPort(const int64_t& _localPort)
{
    m_localPort = _localPort;
    m_localPortHasBeenSet = true;
}

bool DeviceNetworkInfo::LocalPortHasBeenSet() const
{
    return m_localPortHasBeenSet;
}

int64_t DeviceNetworkInfo::GetProcessId() const
{
    return m_processId;
}

void DeviceNetworkInfo::SetProcessId(const int64_t& _processId)
{
    m_processId = _processId;
    m_processIdHasBeenSet = true;
}

bool DeviceNetworkInfo::ProcessIdHasBeenSet() const
{
    return m_processIdHasBeenSet;
}

string DeviceNetworkInfo::GetProcessName() const
{
    return m_processName;
}

void DeviceNetworkInfo::SetProcessName(const string& _processName)
{
    m_processName = _processName;
    m_processNameHasBeenSet = true;
}

bool DeviceNetworkInfo::ProcessNameHasBeenSet() const
{
    return m_processNameHasBeenSet;
}

string DeviceNetworkInfo::GetProtocol() const
{
    return m_protocol;
}

void DeviceNetworkInfo::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool DeviceNetworkInfo::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string DeviceNetworkInfo::GetRemoteAddr() const
{
    return m_remoteAddr;
}

void DeviceNetworkInfo::SetRemoteAddr(const string& _remoteAddr)
{
    m_remoteAddr = _remoteAddr;
    m_remoteAddrHasBeenSet = true;
}

bool DeviceNetworkInfo::RemoteAddrHasBeenSet() const
{
    return m_remoteAddrHasBeenSet;
}

int64_t DeviceNetworkInfo::GetRemotePort() const
{
    return m_remotePort;
}

void DeviceNetworkInfo::SetRemotePort(const int64_t& _remotePort)
{
    m_remotePort = _remotePort;
    m_remotePortHasBeenSet = true;
}

bool DeviceNetworkInfo::RemotePortHasBeenSet() const
{
    return m_remotePortHasBeenSet;
}

int64_t DeviceNetworkInfo::GetState() const
{
    return m_state;
}

void DeviceNetworkInfo::SetState(const int64_t& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool DeviceNetworkInfo::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}


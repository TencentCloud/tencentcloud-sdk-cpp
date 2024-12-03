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

#include <tencentcloud/tsf/v20180326/model/ProtocolPort.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

ProtocolPort::ProtocolPort() :
    m_protocolHasBeenSet(false),
    m_portHasBeenSet(false),
    m_targetPortHasBeenSet(false),
    m_nodePortHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

CoreInternalOutcome ProtocolPort::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtocolPort.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtocolPort.Port` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetInt64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("TargetPort") && !value["TargetPort"].IsNull())
    {
        if (!value["TargetPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtocolPort.TargetPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_targetPort = value["TargetPort"].GetInt64();
        m_targetPortHasBeenSet = true;
    }

    if (value.HasMember("NodePort") && !value["NodePort"].IsNull())
    {
        if (!value["NodePort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtocolPort.NodePort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nodePort = value["NodePort"].GetInt64();
        m_nodePortHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtocolPort.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProtocolPort::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_targetPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_targetPort, allocator);
    }

    if (m_nodePortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodePort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodePort, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

}


string ProtocolPort::GetProtocol() const
{
    return m_protocol;
}

void ProtocolPort::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool ProtocolPort::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

int64_t ProtocolPort::GetPort() const
{
    return m_port;
}

void ProtocolPort::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool ProtocolPort::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

int64_t ProtocolPort::GetTargetPort() const
{
    return m_targetPort;
}

void ProtocolPort::SetTargetPort(const int64_t& _targetPort)
{
    m_targetPort = _targetPort;
    m_targetPortHasBeenSet = true;
}

bool ProtocolPort::TargetPortHasBeenSet() const
{
    return m_targetPortHasBeenSet;
}

int64_t ProtocolPort::GetNodePort() const
{
    return m_nodePort;
}

void ProtocolPort::SetNodePort(const int64_t& _nodePort)
{
    m_nodePort = _nodePort;
    m_nodePortHasBeenSet = true;
}

bool ProtocolPort::NodePortHasBeenSet() const
{
    return m_nodePortHasBeenSet;
}

string ProtocolPort::GetName() const
{
    return m_name;
}

void ProtocolPort::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ProtocolPort::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}


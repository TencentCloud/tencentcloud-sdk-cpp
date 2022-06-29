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

#include <tencentcloud/lighthouse/v20200324/model/DockerContainerPublishPort.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

DockerContainerPublishPort::DockerContainerPublishPort() :
    m_hostPortHasBeenSet(false),
    m_containerPortHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_protocolHasBeenSet(false)
{
}

CoreInternalOutcome DockerContainerPublishPort::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HostPort") && !value["HostPort"].IsNull())
    {
        if (!value["HostPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DockerContainerPublishPort.HostPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hostPort = value["HostPort"].GetInt64();
        m_hostPortHasBeenSet = true;
    }

    if (value.HasMember("ContainerPort") && !value["ContainerPort"].IsNull())
    {
        if (!value["ContainerPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DockerContainerPublishPort.ContainerPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_containerPort = value["ContainerPort"].GetInt64();
        m_containerPortHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DockerContainerPublishPort.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DockerContainerPublishPort.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DockerContainerPublishPort::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hostPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hostPort, allocator);
    }

    if (m_containerPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_containerPort, allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

}


int64_t DockerContainerPublishPort::GetHostPort() const
{
    return m_hostPort;
}

void DockerContainerPublishPort::SetHostPort(const int64_t& _hostPort)
{
    m_hostPort = _hostPort;
    m_hostPortHasBeenSet = true;
}

bool DockerContainerPublishPort::HostPortHasBeenSet() const
{
    return m_hostPortHasBeenSet;
}

int64_t DockerContainerPublishPort::GetContainerPort() const
{
    return m_containerPort;
}

void DockerContainerPublishPort::SetContainerPort(const int64_t& _containerPort)
{
    m_containerPort = _containerPort;
    m_containerPortHasBeenSet = true;
}

bool DockerContainerPublishPort::ContainerPortHasBeenSet() const
{
    return m_containerPortHasBeenSet;
}

string DockerContainerPublishPort::GetIp() const
{
    return m_ip;
}

void DockerContainerPublishPort::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool DockerContainerPublishPort::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string DockerContainerPublishPort::GetProtocol() const
{
    return m_protocol;
}

void DockerContainerPublishPort::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool DockerContainerPublishPort::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}


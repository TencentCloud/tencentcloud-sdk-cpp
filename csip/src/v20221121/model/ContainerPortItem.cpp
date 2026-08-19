/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/csip/v20221121/model/ContainerPortItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ContainerPortItem::ContainerPortItem() :
    m_processNameHasBeenSet(false),
    m_containerPortHasBeenSet(false),
    m_runAsHasBeenSet(false),
    m_containerPIDHasBeenSet(false),
    m_hostInnerIPHasBeenSet(false),
    m_hostPublicIPHasBeenSet(false),
    m_publicPortHasBeenSet(false),
    m_protocolTypeHasBeenSet(false)
{
}

CoreInternalOutcome ContainerPortItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProcessName") && !value["ProcessName"].IsNull())
    {
        if (!value["ProcessName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerPortItem.ProcessName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processName = string(value["ProcessName"].GetString());
        m_processNameHasBeenSet = true;
    }

    if (value.HasMember("ContainerPort") && !value["ContainerPort"].IsNull())
    {
        if (!value["ContainerPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerPortItem.ContainerPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_containerPort = value["ContainerPort"].GetInt64();
        m_containerPortHasBeenSet = true;
    }

    if (value.HasMember("RunAs") && !value["RunAs"].IsNull())
    {
        if (!value["RunAs"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerPortItem.RunAs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runAs = string(value["RunAs"].GetString());
        m_runAsHasBeenSet = true;
    }

    if (value.HasMember("ContainerPID") && !value["ContainerPID"].IsNull())
    {
        if (!value["ContainerPID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerPortItem.ContainerPID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_containerPID = value["ContainerPID"].GetInt64();
        m_containerPIDHasBeenSet = true;
    }

    if (value.HasMember("HostInnerIP") && !value["HostInnerIP"].IsNull())
    {
        if (!value["HostInnerIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerPortItem.HostInnerIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostInnerIP = string(value["HostInnerIP"].GetString());
        m_hostInnerIPHasBeenSet = true;
    }

    if (value.HasMember("HostPublicIP") && !value["HostPublicIP"].IsNull())
    {
        if (!value["HostPublicIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerPortItem.HostPublicIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostPublicIP = string(value["HostPublicIP"].GetString());
        m_hostPublicIPHasBeenSet = true;
    }

    if (value.HasMember("PublicPort") && !value["PublicPort"].IsNull())
    {
        if (!value["PublicPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerPortItem.PublicPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_publicPort = value["PublicPort"].GetInt64();
        m_publicPortHasBeenSet = true;
    }

    if (value.HasMember("ProtocolType") && !value["ProtocolType"].IsNull())
    {
        if (!value["ProtocolType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerPortItem.ProtocolType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocolType = string(value["ProtocolType"].GetString());
        m_protocolTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ContainerPortItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_processNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processName.c_str(), allocator).Move(), allocator);
    }

    if (m_containerPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_containerPort, allocator);
    }

    if (m_runAsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunAs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runAs.c_str(), allocator).Move(), allocator);
    }

    if (m_containerPIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerPID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_containerPID, allocator);
    }

    if (m_hostInnerIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostInnerIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostInnerIP.c_str(), allocator).Move(), allocator);
    }

    if (m_hostPublicIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostPublicIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostPublicIP.c_str(), allocator).Move(), allocator);
    }

    if (m_publicPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_publicPort, allocator);
    }

    if (m_protocolTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtocolType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocolType.c_str(), allocator).Move(), allocator);
    }

}


string ContainerPortItem::GetProcessName() const
{
    return m_processName;
}

void ContainerPortItem::SetProcessName(const string& _processName)
{
    m_processName = _processName;
    m_processNameHasBeenSet = true;
}

bool ContainerPortItem::ProcessNameHasBeenSet() const
{
    return m_processNameHasBeenSet;
}

int64_t ContainerPortItem::GetContainerPort() const
{
    return m_containerPort;
}

void ContainerPortItem::SetContainerPort(const int64_t& _containerPort)
{
    m_containerPort = _containerPort;
    m_containerPortHasBeenSet = true;
}

bool ContainerPortItem::ContainerPortHasBeenSet() const
{
    return m_containerPortHasBeenSet;
}

string ContainerPortItem::GetRunAs() const
{
    return m_runAs;
}

void ContainerPortItem::SetRunAs(const string& _runAs)
{
    m_runAs = _runAs;
    m_runAsHasBeenSet = true;
}

bool ContainerPortItem::RunAsHasBeenSet() const
{
    return m_runAsHasBeenSet;
}

int64_t ContainerPortItem::GetContainerPID() const
{
    return m_containerPID;
}

void ContainerPortItem::SetContainerPID(const int64_t& _containerPID)
{
    m_containerPID = _containerPID;
    m_containerPIDHasBeenSet = true;
}

bool ContainerPortItem::ContainerPIDHasBeenSet() const
{
    return m_containerPIDHasBeenSet;
}

string ContainerPortItem::GetHostInnerIP() const
{
    return m_hostInnerIP;
}

void ContainerPortItem::SetHostInnerIP(const string& _hostInnerIP)
{
    m_hostInnerIP = _hostInnerIP;
    m_hostInnerIPHasBeenSet = true;
}

bool ContainerPortItem::HostInnerIPHasBeenSet() const
{
    return m_hostInnerIPHasBeenSet;
}

string ContainerPortItem::GetHostPublicIP() const
{
    return m_hostPublicIP;
}

void ContainerPortItem::SetHostPublicIP(const string& _hostPublicIP)
{
    m_hostPublicIP = _hostPublicIP;
    m_hostPublicIPHasBeenSet = true;
}

bool ContainerPortItem::HostPublicIPHasBeenSet() const
{
    return m_hostPublicIPHasBeenSet;
}

int64_t ContainerPortItem::GetPublicPort() const
{
    return m_publicPort;
}

void ContainerPortItem::SetPublicPort(const int64_t& _publicPort)
{
    m_publicPort = _publicPort;
    m_publicPortHasBeenSet = true;
}

bool ContainerPortItem::PublicPortHasBeenSet() const
{
    return m_publicPortHasBeenSet;
}

string ContainerPortItem::GetProtocolType() const
{
    return m_protocolType;
}

void ContainerPortItem::SetProtocolType(const string& _protocolType)
{
    m_protocolType = _protocolType;
    m_protocolTypeHasBeenSet = true;
}

bool ContainerPortItem::ProtocolTypeHasBeenSet() const
{
    return m_protocolTypeHasBeenSet;
}


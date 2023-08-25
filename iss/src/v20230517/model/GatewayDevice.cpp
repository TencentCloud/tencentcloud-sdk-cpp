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

#include <tencentcloud/iss/v20230517/model/GatewayDevice.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

GatewayDevice::GatewayDevice() :
    m_deviceIdHasBeenSet(false),
    m_protocolTypeHasBeenSet(false),
    m_protocolTypeNameHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_portHasBeenSet(false),
    m_channelNumHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome GatewayDevice::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeviceId") && !value["DeviceId"].IsNull())
    {
        if (!value["DeviceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayDevice.DeviceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceId = string(value["DeviceId"].GetString());
        m_deviceIdHasBeenSet = true;
    }

    if (value.HasMember("ProtocolType") && !value["ProtocolType"].IsNull())
    {
        if (!value["ProtocolType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayDevice.ProtocolType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_protocolType = value["ProtocolType"].GetInt64();
        m_protocolTypeHasBeenSet = true;
    }

    if (value.HasMember("ProtocolTypeName") && !value["ProtocolTypeName"].IsNull())
    {
        if (!value["ProtocolTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayDevice.ProtocolTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocolTypeName = string(value["ProtocolTypeName"].GetString());
        m_protocolTypeNameHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayDevice.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayDevice.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayDevice.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayDevice.Port` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetInt64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("ChannelNum") && !value["ChannelNum"].IsNull())
    {
        if (!value["ChannelNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayDevice.ChannelNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_channelNum = value["ChannelNum"].GetInt64();
        m_channelNumHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayDevice.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GatewayDevice::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtocolType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protocolType, allocator);
    }

    if (m_protocolTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtocolTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocolTypeName.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_channelNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_channelNum, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

}


string GatewayDevice::GetDeviceId() const
{
    return m_deviceId;
}

void GatewayDevice::SetDeviceId(const string& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool GatewayDevice::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

int64_t GatewayDevice::GetProtocolType() const
{
    return m_protocolType;
}

void GatewayDevice::SetProtocolType(const int64_t& _protocolType)
{
    m_protocolType = _protocolType;
    m_protocolTypeHasBeenSet = true;
}

bool GatewayDevice::ProtocolTypeHasBeenSet() const
{
    return m_protocolTypeHasBeenSet;
}

string GatewayDevice::GetProtocolTypeName() const
{
    return m_protocolTypeName;
}

void GatewayDevice::SetProtocolTypeName(const string& _protocolTypeName)
{
    m_protocolTypeName = _protocolTypeName;
    m_protocolTypeNameHasBeenSet = true;
}

bool GatewayDevice::ProtocolTypeNameHasBeenSet() const
{
    return m_protocolTypeNameHasBeenSet;
}

string GatewayDevice::GetName() const
{
    return m_name;
}

void GatewayDevice::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool GatewayDevice::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t GatewayDevice::GetType() const
{
    return m_type;
}

void GatewayDevice::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool GatewayDevice::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string GatewayDevice::GetIp() const
{
    return m_ip;
}

void GatewayDevice::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool GatewayDevice::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

int64_t GatewayDevice::GetPort() const
{
    return m_port;
}

void GatewayDevice::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool GatewayDevice::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

int64_t GatewayDevice::GetChannelNum() const
{
    return m_channelNum;
}

void GatewayDevice::SetChannelNum(const int64_t& _channelNum)
{
    m_channelNum = _channelNum;
    m_channelNumHasBeenSet = true;
}

bool GatewayDevice::ChannelNumHasBeenSet() const
{
    return m_channelNumHasBeenSet;
}

int64_t GatewayDevice::GetStatus() const
{
    return m_status;
}

void GatewayDevice::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool GatewayDevice::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}


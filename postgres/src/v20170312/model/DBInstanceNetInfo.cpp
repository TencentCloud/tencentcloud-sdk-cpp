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

#include <tencentcloud/postgres/v20170312/model/DBInstanceNetInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Postgres::V20170312::Model;
using namespace rapidjson;
using namespace std;

DBInstanceNetInfo::DBInstanceNetInfo() :
    m_addressHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_portHasBeenSet(false),
    m_netTypeHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome DBInstanceNetInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Error("response `DBInstanceNetInfo.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Error("response `DBInstanceNetInfo.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `DBInstanceNetInfo.Port` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetUint64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("NetType") && !value["NetType"].IsNull())
    {
        if (!value["NetType"].IsString())
        {
            return CoreInternalOutcome(Error("response `DBInstanceNetInfo.NetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_netType = string(value["NetType"].GetString());
        m_netTypeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Error("response `DBInstanceNetInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DBInstanceNetInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_addressHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_netTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_netType.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_status.c_str(), allocator).Move(), allocator);
    }

}


string DBInstanceNetInfo::GetAddress() const
{
    return m_address;
}

void DBInstanceNetInfo::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool DBInstanceNetInfo::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string DBInstanceNetInfo::GetIp() const
{
    return m_ip;
}

void DBInstanceNetInfo::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool DBInstanceNetInfo::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

uint64_t DBInstanceNetInfo::GetPort() const
{
    return m_port;
}

void DBInstanceNetInfo::SetPort(const uint64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool DBInstanceNetInfo::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string DBInstanceNetInfo::GetNetType() const
{
    return m_netType;
}

void DBInstanceNetInfo::SetNetType(const string& _netType)
{
    m_netType = _netType;
    m_netTypeHasBeenSet = true;
}

bool DBInstanceNetInfo::NetTypeHasBeenSet() const
{
    return m_netTypeHasBeenSet;
}

string DBInstanceNetInfo::GetStatus() const
{
    return m_status;
}

void DBInstanceNetInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DBInstanceNetInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}


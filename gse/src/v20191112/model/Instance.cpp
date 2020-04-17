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

#include <tencentcloud/gse/v20191112/model/Instance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gse::V20191112::Model;
using namespace rapidjson;
using namespace std;

Instance::Instance() :
    m_fleetIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_ipAddressHasBeenSet(false),
    m_dnsNameHasBeenSet(false),
    m_operatingSystemHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome Instance::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("FleetId") && !value["FleetId"].IsNull())
    {
        if (!value["FleetId"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.FleetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fleetId = string(value["FleetId"].GetString());
        m_fleetIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("IpAddress") && !value["IpAddress"].IsNull())
    {
        if (!value["IpAddress"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.IpAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipAddress = string(value["IpAddress"].GetString());
        m_ipAddressHasBeenSet = true;
    }

    if (value.HasMember("DnsName") && !value["DnsName"].IsNull())
    {
        if (!value["DnsName"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.DnsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dnsName = string(value["DnsName"].GetString());
        m_dnsNameHasBeenSet = true;
    }

    if (value.HasMember("OperatingSystem") && !value["OperatingSystem"].IsNull())
    {
        if (!value["OperatingSystem"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.OperatingSystem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operatingSystem = string(value["OperatingSystem"].GetString());
        m_operatingSystemHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Instance::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_fleetIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FleetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_fleetId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_ipAddressHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IpAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_ipAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_dnsNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DnsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_dnsName.c_str(), allocator).Move(), allocator);
    }

    if (m_operatingSystemHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OperatingSystem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_operatingSystem.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

}


string Instance::GetFleetId() const
{
    return m_fleetId;
}

void Instance::SetFleetId(const string& _fleetId)
{
    m_fleetId = _fleetId;
    m_fleetIdHasBeenSet = true;
}

bool Instance::FleetIdHasBeenSet() const
{
    return m_fleetIdHasBeenSet;
}

string Instance::GetInstanceId() const
{
    return m_instanceId;
}

void Instance::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool Instance::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string Instance::GetIpAddress() const
{
    return m_ipAddress;
}

void Instance::SetIpAddress(const string& _ipAddress)
{
    m_ipAddress = _ipAddress;
    m_ipAddressHasBeenSet = true;
}

bool Instance::IpAddressHasBeenSet() const
{
    return m_ipAddressHasBeenSet;
}

string Instance::GetDnsName() const
{
    return m_dnsName;
}

void Instance::SetDnsName(const string& _dnsName)
{
    m_dnsName = _dnsName;
    m_dnsNameHasBeenSet = true;
}

bool Instance::DnsNameHasBeenSet() const
{
    return m_dnsNameHasBeenSet;
}

string Instance::GetOperatingSystem() const
{
    return m_operatingSystem;
}

void Instance::SetOperatingSystem(const string& _operatingSystem)
{
    m_operatingSystem = _operatingSystem;
    m_operatingSystemHasBeenSet = true;
}

bool Instance::OperatingSystemHasBeenSet() const
{
    return m_operatingSystemHasBeenSet;
}

string Instance::GetStatus() const
{
    return m_status;
}

void Instance::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Instance::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string Instance::GetType() const
{
    return m_type;
}

void Instance::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool Instance::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string Instance::GetCreateTime() const
{
    return m_createTime;
}

void Instance::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Instance::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}


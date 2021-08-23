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

#include <tencentcloud/redis/v20180412/model/Inbound.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

Inbound::Inbound() :
    m_actionHasBeenSet(false),
    m_addressModuleHasBeenSet(false),
    m_cidrIpHasBeenSet(false),
    m_descHasBeenSet(false),
    m_ipProtocolHasBeenSet(false),
    m_portRangeHasBeenSet(false),
    m_serviceModuleHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

CoreInternalOutcome Inbound::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Inbound.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("AddressModule") && !value["AddressModule"].IsNull())
    {
        if (!value["AddressModule"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Inbound.AddressModule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addressModule = string(value["AddressModule"].GetString());
        m_addressModuleHasBeenSet = true;
    }

    if (value.HasMember("CidrIp") && !value["CidrIp"].IsNull())
    {
        if (!value["CidrIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Inbound.CidrIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cidrIp = string(value["CidrIp"].GetString());
        m_cidrIpHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Inbound.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }

    if (value.HasMember("IpProtocol") && !value["IpProtocol"].IsNull())
    {
        if (!value["IpProtocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Inbound.IpProtocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipProtocol = string(value["IpProtocol"].GetString());
        m_ipProtocolHasBeenSet = true;
    }

    if (value.HasMember("PortRange") && !value["PortRange"].IsNull())
    {
        if (!value["PortRange"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Inbound.PortRange` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_portRange = string(value["PortRange"].GetString());
        m_portRangeHasBeenSet = true;
    }

    if (value.HasMember("ServiceModule") && !value["ServiceModule"].IsNull())
    {
        if (!value["ServiceModule"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Inbound.ServiceModule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceModule = string(value["ServiceModule"].GetString());
        m_serviceModuleHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Inbound.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Inbound::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_addressModuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressModule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addressModule.c_str(), allocator).Move(), allocator);
    }

    if (m_cidrIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CidrIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cidrIp.c_str(), allocator).Move(), allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

    if (m_ipProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpProtocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipProtocol.c_str(), allocator).Move(), allocator);
    }

    if (m_portRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PortRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_portRange.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceModuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceModule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceModule.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

}


string Inbound::GetAction() const
{
    return m_action;
}

void Inbound::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool Inbound::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

string Inbound::GetAddressModule() const
{
    return m_addressModule;
}

void Inbound::SetAddressModule(const string& _addressModule)
{
    m_addressModule = _addressModule;
    m_addressModuleHasBeenSet = true;
}

bool Inbound::AddressModuleHasBeenSet() const
{
    return m_addressModuleHasBeenSet;
}

string Inbound::GetCidrIp() const
{
    return m_cidrIp;
}

void Inbound::SetCidrIp(const string& _cidrIp)
{
    m_cidrIp = _cidrIp;
    m_cidrIpHasBeenSet = true;
}

bool Inbound::CidrIpHasBeenSet() const
{
    return m_cidrIpHasBeenSet;
}

string Inbound::GetDesc() const
{
    return m_desc;
}

void Inbound::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool Inbound::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

string Inbound::GetIpProtocol() const
{
    return m_ipProtocol;
}

void Inbound::SetIpProtocol(const string& _ipProtocol)
{
    m_ipProtocol = _ipProtocol;
    m_ipProtocolHasBeenSet = true;
}

bool Inbound::IpProtocolHasBeenSet() const
{
    return m_ipProtocolHasBeenSet;
}

string Inbound::GetPortRange() const
{
    return m_portRange;
}

void Inbound::SetPortRange(const string& _portRange)
{
    m_portRange = _portRange;
    m_portRangeHasBeenSet = true;
}

bool Inbound::PortRangeHasBeenSet() const
{
    return m_portRangeHasBeenSet;
}

string Inbound::GetServiceModule() const
{
    return m_serviceModule;
}

void Inbound::SetServiceModule(const string& _serviceModule)
{
    m_serviceModule = _serviceModule;
    m_serviceModuleHasBeenSet = true;
}

bool Inbound::ServiceModuleHasBeenSet() const
{
    return m_serviceModuleHasBeenSet;
}

string Inbound::GetId() const
{
    return m_id;
}

void Inbound::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool Inbound::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}


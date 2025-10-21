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

#include <tencentcloud/cdb/v20170320/model/Outbound.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

Outbound::Outbound() :
    m_actionHasBeenSet(false),
    m_cidrIpHasBeenSet(false),
    m_portRangeHasBeenSet(false),
    m_ipProtocolHasBeenSet(false),
    m_dirHasBeenSet(false),
    m_addressModuleHasBeenSet(false),
    m_descHasBeenSet(false)
{
}

CoreInternalOutcome Outbound::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Outbound.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("CidrIp") && !value["CidrIp"].IsNull())
    {
        if (!value["CidrIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Outbound.CidrIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cidrIp = string(value["CidrIp"].GetString());
        m_cidrIpHasBeenSet = true;
    }

    if (value.HasMember("PortRange") && !value["PortRange"].IsNull())
    {
        if (!value["PortRange"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Outbound.PortRange` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_portRange = string(value["PortRange"].GetString());
        m_portRangeHasBeenSet = true;
    }

    if (value.HasMember("IpProtocol") && !value["IpProtocol"].IsNull())
    {
        if (!value["IpProtocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Outbound.IpProtocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipProtocol = string(value["IpProtocol"].GetString());
        m_ipProtocolHasBeenSet = true;
    }

    if (value.HasMember("Dir") && !value["Dir"].IsNull())
    {
        if (!value["Dir"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Outbound.Dir` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dir = string(value["Dir"].GetString());
        m_dirHasBeenSet = true;
    }

    if (value.HasMember("AddressModule") && !value["AddressModule"].IsNull())
    {
        if (!value["AddressModule"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Outbound.AddressModule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addressModule = string(value["AddressModule"].GetString());
        m_addressModuleHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Outbound.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Outbound::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_cidrIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CidrIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cidrIp.c_str(), allocator).Move(), allocator);
    }

    if (m_portRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PortRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_portRange.c_str(), allocator).Move(), allocator);
    }

    if (m_ipProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpProtocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipProtocol.c_str(), allocator).Move(), allocator);
    }

    if (m_dirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dir";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dir.c_str(), allocator).Move(), allocator);
    }

    if (m_addressModuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressModule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addressModule.c_str(), allocator).Move(), allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

}


string Outbound::GetAction() const
{
    return m_action;
}

void Outbound::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool Outbound::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

string Outbound::GetCidrIp() const
{
    return m_cidrIp;
}

void Outbound::SetCidrIp(const string& _cidrIp)
{
    m_cidrIp = _cidrIp;
    m_cidrIpHasBeenSet = true;
}

bool Outbound::CidrIpHasBeenSet() const
{
    return m_cidrIpHasBeenSet;
}

string Outbound::GetPortRange() const
{
    return m_portRange;
}

void Outbound::SetPortRange(const string& _portRange)
{
    m_portRange = _portRange;
    m_portRangeHasBeenSet = true;
}

bool Outbound::PortRangeHasBeenSet() const
{
    return m_portRangeHasBeenSet;
}

string Outbound::GetIpProtocol() const
{
    return m_ipProtocol;
}

void Outbound::SetIpProtocol(const string& _ipProtocol)
{
    m_ipProtocol = _ipProtocol;
    m_ipProtocolHasBeenSet = true;
}

bool Outbound::IpProtocolHasBeenSet() const
{
    return m_ipProtocolHasBeenSet;
}

string Outbound::GetDir() const
{
    return m_dir;
}

void Outbound::SetDir(const string& _dir)
{
    m_dir = _dir;
    m_dirHasBeenSet = true;
}

bool Outbound::DirHasBeenSet() const
{
    return m_dirHasBeenSet;
}

string Outbound::GetAddressModule() const
{
    return m_addressModule;
}

void Outbound::SetAddressModule(const string& _addressModule)
{
    m_addressModule = _addressModule;
    m_addressModuleHasBeenSet = true;
}

bool Outbound::AddressModuleHasBeenSet() const
{
    return m_addressModuleHasBeenSet;
}

string Outbound::GetDesc() const
{
    return m_desc;
}

void Outbound::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool Outbound::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}


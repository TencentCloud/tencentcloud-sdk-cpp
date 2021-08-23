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

#include <tencentcloud/cynosdb/v20190107/model/PolicyRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

PolicyRule::PolicyRule() :
    m_actionHasBeenSet(false),
    m_cidrIpHasBeenSet(false),
    m_portRangeHasBeenSet(false),
    m_ipProtocolHasBeenSet(false),
    m_serviceModuleHasBeenSet(false),
    m_addressModuleHasBeenSet(false),
    m_idHasBeenSet(false),
    m_descHasBeenSet(false)
{
}

CoreInternalOutcome PolicyRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyRule.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("CidrIp") && !value["CidrIp"].IsNull())
    {
        if (!value["CidrIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyRule.CidrIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cidrIp = string(value["CidrIp"].GetString());
        m_cidrIpHasBeenSet = true;
    }

    if (value.HasMember("PortRange") && !value["PortRange"].IsNull())
    {
        if (!value["PortRange"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyRule.PortRange` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_portRange = string(value["PortRange"].GetString());
        m_portRangeHasBeenSet = true;
    }

    if (value.HasMember("IpProtocol") && !value["IpProtocol"].IsNull())
    {
        if (!value["IpProtocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyRule.IpProtocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipProtocol = string(value["IpProtocol"].GetString());
        m_ipProtocolHasBeenSet = true;
    }

    if (value.HasMember("ServiceModule") && !value["ServiceModule"].IsNull())
    {
        if (!value["ServiceModule"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyRule.ServiceModule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceModule = string(value["ServiceModule"].GetString());
        m_serviceModuleHasBeenSet = true;
    }

    if (value.HasMember("AddressModule") && !value["AddressModule"].IsNull())
    {
        if (!value["AddressModule"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyRule.AddressModule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addressModule = string(value["AddressModule"].GetString());
        m_addressModuleHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyRule.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyRule.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PolicyRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_serviceModuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceModule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceModule.c_str(), allocator).Move(), allocator);
    }

    if (m_addressModuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressModule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addressModule.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

}


string PolicyRule::GetAction() const
{
    return m_action;
}

void PolicyRule::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool PolicyRule::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

string PolicyRule::GetCidrIp() const
{
    return m_cidrIp;
}

void PolicyRule::SetCidrIp(const string& _cidrIp)
{
    m_cidrIp = _cidrIp;
    m_cidrIpHasBeenSet = true;
}

bool PolicyRule::CidrIpHasBeenSet() const
{
    return m_cidrIpHasBeenSet;
}

string PolicyRule::GetPortRange() const
{
    return m_portRange;
}

void PolicyRule::SetPortRange(const string& _portRange)
{
    m_portRange = _portRange;
    m_portRangeHasBeenSet = true;
}

bool PolicyRule::PortRangeHasBeenSet() const
{
    return m_portRangeHasBeenSet;
}

string PolicyRule::GetIpProtocol() const
{
    return m_ipProtocol;
}

void PolicyRule::SetIpProtocol(const string& _ipProtocol)
{
    m_ipProtocol = _ipProtocol;
    m_ipProtocolHasBeenSet = true;
}

bool PolicyRule::IpProtocolHasBeenSet() const
{
    return m_ipProtocolHasBeenSet;
}

string PolicyRule::GetServiceModule() const
{
    return m_serviceModule;
}

void PolicyRule::SetServiceModule(const string& _serviceModule)
{
    m_serviceModule = _serviceModule;
    m_serviceModuleHasBeenSet = true;
}

bool PolicyRule::ServiceModuleHasBeenSet() const
{
    return m_serviceModuleHasBeenSet;
}

string PolicyRule::GetAddressModule() const
{
    return m_addressModule;
}

void PolicyRule::SetAddressModule(const string& _addressModule)
{
    m_addressModule = _addressModule;
    m_addressModuleHasBeenSet = true;
}

bool PolicyRule::AddressModuleHasBeenSet() const
{
    return m_addressModuleHasBeenSet;
}

string PolicyRule::GetId() const
{
    return m_id;
}

void PolicyRule::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool PolicyRule::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string PolicyRule::GetDesc() const
{
    return m_desc;
}

void PolicyRule::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool PolicyRule::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}


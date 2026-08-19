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

#include <tencentcloud/csip/v20221121/model/LighthouseFirewallRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

LighthouseFirewallRule::LighthouseFirewallRule() :
    m_appTypeHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_portHasBeenSet(false),
    m_cidrBlockHasBeenSet(false),
    m_ipv6CidrBlockHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_firewallRuleDescriptionHasBeenSet(false)
{
}

CoreInternalOutcome LighthouseFirewallRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppType") && !value["AppType"].IsNull())
    {
        if (!value["AppType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LighthouseFirewallRule.AppType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appType = string(value["AppType"].GetString());
        m_appTypeHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LighthouseFirewallRule.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LighthouseFirewallRule.Port` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_port = string(value["Port"].GetString());
        m_portHasBeenSet = true;
    }

    if (value.HasMember("CidrBlock") && !value["CidrBlock"].IsNull())
    {
        if (!value["CidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LighthouseFirewallRule.CidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cidrBlock = string(value["CidrBlock"].GetString());
        m_cidrBlockHasBeenSet = true;
    }

    if (value.HasMember("Ipv6CidrBlock") && !value["Ipv6CidrBlock"].IsNull())
    {
        if (!value["Ipv6CidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LighthouseFirewallRule.Ipv6CidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipv6CidrBlock = string(value["Ipv6CidrBlock"].GetString());
        m_ipv6CidrBlockHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LighthouseFirewallRule.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("FirewallRuleDescription") && !value["FirewallRuleDescription"].IsNull())
    {
        if (!value["FirewallRuleDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LighthouseFirewallRule.FirewallRuleDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firewallRuleDescription = string(value["FirewallRuleDescription"].GetString());
        m_firewallRuleDescriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LighthouseFirewallRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appType.c_str(), allocator).Move(), allocator);
    }

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
        value.AddMember(iKey, rapidjson::Value(m_port.c_str(), allocator).Move(), allocator);
    }

    if (m_cidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_ipv6CidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ipv6CidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipv6CidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_firewallRuleDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirewallRuleDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firewallRuleDescription.c_str(), allocator).Move(), allocator);
    }

}


string LighthouseFirewallRule::GetAppType() const
{
    return m_appType;
}

void LighthouseFirewallRule::SetAppType(const string& _appType)
{
    m_appType = _appType;
    m_appTypeHasBeenSet = true;
}

bool LighthouseFirewallRule::AppTypeHasBeenSet() const
{
    return m_appTypeHasBeenSet;
}

string LighthouseFirewallRule::GetProtocol() const
{
    return m_protocol;
}

void LighthouseFirewallRule::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool LighthouseFirewallRule::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string LighthouseFirewallRule::GetPort() const
{
    return m_port;
}

void LighthouseFirewallRule::SetPort(const string& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool LighthouseFirewallRule::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string LighthouseFirewallRule::GetCidrBlock() const
{
    return m_cidrBlock;
}

void LighthouseFirewallRule::SetCidrBlock(const string& _cidrBlock)
{
    m_cidrBlock = _cidrBlock;
    m_cidrBlockHasBeenSet = true;
}

bool LighthouseFirewallRule::CidrBlockHasBeenSet() const
{
    return m_cidrBlockHasBeenSet;
}

string LighthouseFirewallRule::GetIpv6CidrBlock() const
{
    return m_ipv6CidrBlock;
}

void LighthouseFirewallRule::SetIpv6CidrBlock(const string& _ipv6CidrBlock)
{
    m_ipv6CidrBlock = _ipv6CidrBlock;
    m_ipv6CidrBlockHasBeenSet = true;
}

bool LighthouseFirewallRule::Ipv6CidrBlockHasBeenSet() const
{
    return m_ipv6CidrBlockHasBeenSet;
}

string LighthouseFirewallRule::GetAction() const
{
    return m_action;
}

void LighthouseFirewallRule::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool LighthouseFirewallRule::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

string LighthouseFirewallRule::GetFirewallRuleDescription() const
{
    return m_firewallRuleDescription;
}

void LighthouseFirewallRule::SetFirewallRuleDescription(const string& _firewallRuleDescription)
{
    m_firewallRuleDescription = _firewallRuleDescription;
    m_firewallRuleDescriptionHasBeenSet = true;
}

bool LighthouseFirewallRule::FirewallRuleDescriptionHasBeenSet() const
{
    return m_firewallRuleDescriptionHasBeenSet;
}


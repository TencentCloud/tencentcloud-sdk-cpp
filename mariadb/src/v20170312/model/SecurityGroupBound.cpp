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

#include <tencentcloud/mariadb/v20170312/model/SecurityGroupBound.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mariadb::V20170312::Model;
using namespace std;

SecurityGroupBound::SecurityGroupBound() :
    m_actionHasBeenSet(false),
    m_cidrIpHasBeenSet(false),
    m_portRangeHasBeenSet(false),
    m_ipProtocolHasBeenSet(false)
{
}

CoreInternalOutcome SecurityGroupBound::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupBound.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("CidrIp") && !value["CidrIp"].IsNull())
    {
        if (!value["CidrIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupBound.CidrIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cidrIp = string(value["CidrIp"].GetString());
        m_cidrIpHasBeenSet = true;
    }

    if (value.HasMember("PortRange") && !value["PortRange"].IsNull())
    {
        if (!value["PortRange"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupBound.PortRange` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_portRange = string(value["PortRange"].GetString());
        m_portRangeHasBeenSet = true;
    }

    if (value.HasMember("IpProtocol") && !value["IpProtocol"].IsNull())
    {
        if (!value["IpProtocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityGroupBound.IpProtocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipProtocol = string(value["IpProtocol"].GetString());
        m_ipProtocolHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecurityGroupBound::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


string SecurityGroupBound::GetAction() const
{
    return m_action;
}

void SecurityGroupBound::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool SecurityGroupBound::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

string SecurityGroupBound::GetCidrIp() const
{
    return m_cidrIp;
}

void SecurityGroupBound::SetCidrIp(const string& _cidrIp)
{
    m_cidrIp = _cidrIp;
    m_cidrIpHasBeenSet = true;
}

bool SecurityGroupBound::CidrIpHasBeenSet() const
{
    return m_cidrIpHasBeenSet;
}

string SecurityGroupBound::GetPortRange() const
{
    return m_portRange;
}

void SecurityGroupBound::SetPortRange(const string& _portRange)
{
    m_portRange = _portRange;
    m_portRangeHasBeenSet = true;
}

bool SecurityGroupBound::PortRangeHasBeenSet() const
{
    return m_portRangeHasBeenSet;
}

string SecurityGroupBound::GetIpProtocol() const
{
    return m_ipProtocol;
}

void SecurityGroupBound::SetIpProtocol(const string& _ipProtocol)
{
    m_ipProtocol = _ipProtocol;
    m_ipProtocolHasBeenSet = true;
}

bool SecurityGroupBound::IpProtocolHasBeenSet() const
{
    return m_ipProtocolHasBeenSet;
}


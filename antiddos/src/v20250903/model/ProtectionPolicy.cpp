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

#include <tencentcloud/antiddos/v20250903/model/ProtectionPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20250903::Model;
using namespace std;

ProtectionPolicy::ProtectionPolicy() :
    m_defaultProtectionHasBeenSet(false),
    m_iPACLRulesHasBeenSet(false),
    m_portACLRulesHasBeenSet(false),
    m_speedLimitRulesHasBeenSet(false),
    m_packetFilterRulesHasBeenSet(false),
    m_geoBlockingHasBeenSet(false),
    m_protocolBlockingHasBeenSet(false),
    m_connectionProtectionHasBeenSet(false),
    m_trafficSignatureHasBeenSet(false)
{
}

CoreInternalOutcome ProtectionPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DefaultProtection") && !value["DefaultProtection"].IsNull())
    {
        if (!value["DefaultProtection"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectionPolicy.DefaultProtection` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_defaultProtection.Deserialize(value["DefaultProtection"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_defaultProtectionHasBeenSet = true;
    }

    if (value.HasMember("IPACLRules") && !value["IPACLRules"].IsNull())
    {
        if (!value["IPACLRules"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectionPolicy.IPACLRules` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_iPACLRules.Deserialize(value["IPACLRules"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_iPACLRulesHasBeenSet = true;
    }

    if (value.HasMember("PortACLRules") && !value["PortACLRules"].IsNull())
    {
        if (!value["PortACLRules"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectionPolicy.PortACLRules` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_portACLRules.Deserialize(value["PortACLRules"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_portACLRulesHasBeenSet = true;
    }

    if (value.HasMember("SpeedLimitRules") && !value["SpeedLimitRules"].IsNull())
    {
        if (!value["SpeedLimitRules"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectionPolicy.SpeedLimitRules` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_speedLimitRules.Deserialize(value["SpeedLimitRules"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_speedLimitRulesHasBeenSet = true;
    }

    if (value.HasMember("PacketFilterRules") && !value["PacketFilterRules"].IsNull())
    {
        if (!value["PacketFilterRules"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectionPolicy.PacketFilterRules` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_packetFilterRules.Deserialize(value["PacketFilterRules"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_packetFilterRulesHasBeenSet = true;
    }

    if (value.HasMember("GeoBlocking") && !value["GeoBlocking"].IsNull())
    {
        if (!value["GeoBlocking"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectionPolicy.GeoBlocking` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_geoBlocking.Deserialize(value["GeoBlocking"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_geoBlockingHasBeenSet = true;
    }

    if (value.HasMember("ProtocolBlocking") && !value["ProtocolBlocking"].IsNull())
    {
        if (!value["ProtocolBlocking"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectionPolicy.ProtocolBlocking` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_protocolBlocking.Deserialize(value["ProtocolBlocking"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_protocolBlockingHasBeenSet = true;
    }

    if (value.HasMember("ConnectionProtection") && !value["ConnectionProtection"].IsNull())
    {
        if (!value["ConnectionProtection"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectionPolicy.ConnectionProtection` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_connectionProtection.Deserialize(value["ConnectionProtection"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_connectionProtectionHasBeenSet = true;
    }

    if (value.HasMember("TrafficSignature") && !value["TrafficSignature"].IsNull())
    {
        if (!value["TrafficSignature"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectionPolicy.TrafficSignature` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_trafficSignature.Deserialize(value["TrafficSignature"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_trafficSignatureHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProtectionPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_defaultProtectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultProtection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_defaultProtection.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_iPACLRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPACLRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_iPACLRules.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_portACLRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PortACLRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_portACLRules.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_speedLimitRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpeedLimitRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_speedLimitRules.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_packetFilterRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PacketFilterRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_packetFilterRules.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_geoBlockingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GeoBlocking";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_geoBlocking.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_protocolBlockingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtocolBlocking";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_protocolBlocking.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_connectionProtectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectionProtection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_connectionProtection.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_trafficSignatureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficSignature";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_trafficSignature.ToJsonObject(value[key.c_str()], allocator);
    }

}


DefaultProtectionConfig ProtectionPolicy::GetDefaultProtection() const
{
    return m_defaultProtection;
}

void ProtectionPolicy::SetDefaultProtection(const DefaultProtectionConfig& _defaultProtection)
{
    m_defaultProtection = _defaultProtection;
    m_defaultProtectionHasBeenSet = true;
}

bool ProtectionPolicy::DefaultProtectionHasBeenSet() const
{
    return m_defaultProtectionHasBeenSet;
}

IPACLRules ProtectionPolicy::GetIPACLRules() const
{
    return m_iPACLRules;
}

void ProtectionPolicy::SetIPACLRules(const IPACLRules& _iPACLRules)
{
    m_iPACLRules = _iPACLRules;
    m_iPACLRulesHasBeenSet = true;
}

bool ProtectionPolicy::IPACLRulesHasBeenSet() const
{
    return m_iPACLRulesHasBeenSet;
}

PortACLRules ProtectionPolicy::GetPortACLRules() const
{
    return m_portACLRules;
}

void ProtectionPolicy::SetPortACLRules(const PortACLRules& _portACLRules)
{
    m_portACLRules = _portACLRules;
    m_portACLRulesHasBeenSet = true;
}

bool ProtectionPolicy::PortACLRulesHasBeenSet() const
{
    return m_portACLRulesHasBeenSet;
}

SpeedLimitRules ProtectionPolicy::GetSpeedLimitRules() const
{
    return m_speedLimitRules;
}

void ProtectionPolicy::SetSpeedLimitRules(const SpeedLimitRules& _speedLimitRules)
{
    m_speedLimitRules = _speedLimitRules;
    m_speedLimitRulesHasBeenSet = true;
}

bool ProtectionPolicy::SpeedLimitRulesHasBeenSet() const
{
    return m_speedLimitRulesHasBeenSet;
}

PacketFilterRules ProtectionPolicy::GetPacketFilterRules() const
{
    return m_packetFilterRules;
}

void ProtectionPolicy::SetPacketFilterRules(const PacketFilterRules& _packetFilterRules)
{
    m_packetFilterRules = _packetFilterRules;
    m_packetFilterRulesHasBeenSet = true;
}

bool ProtectionPolicy::PacketFilterRulesHasBeenSet() const
{
    return m_packetFilterRulesHasBeenSet;
}

GeoBlockingConfig ProtectionPolicy::GetGeoBlocking() const
{
    return m_geoBlocking;
}

void ProtectionPolicy::SetGeoBlocking(const GeoBlockingConfig& _geoBlocking)
{
    m_geoBlocking = _geoBlocking;
    m_geoBlockingHasBeenSet = true;
}

bool ProtectionPolicy::GeoBlockingHasBeenSet() const
{
    return m_geoBlockingHasBeenSet;
}

ProtocolBlockingConfig ProtectionPolicy::GetProtocolBlocking() const
{
    return m_protocolBlocking;
}

void ProtectionPolicy::SetProtocolBlocking(const ProtocolBlockingConfig& _protocolBlocking)
{
    m_protocolBlocking = _protocolBlocking;
    m_protocolBlockingHasBeenSet = true;
}

bool ProtectionPolicy::ProtocolBlockingHasBeenSet() const
{
    return m_protocolBlockingHasBeenSet;
}

ConnectionProtectionConfig ProtectionPolicy::GetConnectionProtection() const
{
    return m_connectionProtection;
}

void ProtectionPolicy::SetConnectionProtection(const ConnectionProtectionConfig& _connectionProtection)
{
    m_connectionProtection = _connectionProtection;
    m_connectionProtectionHasBeenSet = true;
}

bool ProtectionPolicy::ConnectionProtectionHasBeenSet() const
{
    return m_connectionProtectionHasBeenSet;
}

TrafficSignatureConfig ProtectionPolicy::GetTrafficSignature() const
{
    return m_trafficSignature;
}

void ProtectionPolicy::SetTrafficSignature(const TrafficSignatureConfig& _trafficSignature)
{
    m_trafficSignature = _trafficSignature;
    m_trafficSignatureHasBeenSet = true;
}

bool ProtectionPolicy::TrafficSignatureHasBeenSet() const
{
    return m_trafficSignatureHasBeenSet;
}


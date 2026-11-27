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

#include <tencentcloud/antiddos/v20250903/model/PacketFilterRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20250903::Model;
using namespace std;

PacketFilterRule::PacketFilterRule() :
    m_actionHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_packetSizeRangeHasBeenSet(false),
    m_sourcePortRangeHasBeenSet(false),
    m_destinationPortRangeHasBeenSet(false),
    m_packetFilterConditionsHasBeenSet(false)
{
}

CoreInternalOutcome PacketFilterRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PacketFilterRule.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PacketFilterRule.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("PacketSizeRange") && !value["PacketSizeRange"].IsNull())
    {
        if (!value["PacketSizeRange"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PacketFilterRule.PacketSizeRange` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_packetSizeRange.Deserialize(value["PacketSizeRange"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_packetSizeRangeHasBeenSet = true;
    }

    if (value.HasMember("SourcePortRange") && !value["SourcePortRange"].IsNull())
    {
        if (!value["SourcePortRange"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PacketFilterRule.SourcePortRange` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sourcePortRange.Deserialize(value["SourcePortRange"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sourcePortRangeHasBeenSet = true;
    }

    if (value.HasMember("DestinationPortRange") && !value["DestinationPortRange"].IsNull())
    {
        if (!value["DestinationPortRange"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PacketFilterRule.DestinationPortRange` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_destinationPortRange.Deserialize(value["DestinationPortRange"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_destinationPortRangeHasBeenSet = true;
    }

    if (value.HasMember("PacketFilterConditions") && !value["PacketFilterConditions"].IsNull())
    {
        if (!value["PacketFilterConditions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PacketFilterRule.PacketFilterConditions` is not array type"));

        const rapidjson::Value &tmpValue = value["PacketFilterConditions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PacketFilterCondition item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_packetFilterConditions.push_back(item);
        }
        m_packetFilterConditionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PacketFilterRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_packetSizeRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PacketSizeRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_packetSizeRange.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sourcePortRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourcePortRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sourcePortRange.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_destinationPortRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationPortRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_destinationPortRange.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_packetFilterConditionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PacketFilterConditions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_packetFilterConditions.begin(); itr != m_packetFilterConditions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string PacketFilterRule::GetAction() const
{
    return m_action;
}

void PacketFilterRule::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool PacketFilterRule::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

string PacketFilterRule::GetProtocol() const
{
    return m_protocol;
}

void PacketFilterRule::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool PacketFilterRule::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

SizeRange PacketFilterRule::GetPacketSizeRange() const
{
    return m_packetSizeRange;
}

void PacketFilterRule::SetPacketSizeRange(const SizeRange& _packetSizeRange)
{
    m_packetSizeRange = _packetSizeRange;
    m_packetSizeRangeHasBeenSet = true;
}

bool PacketFilterRule::PacketSizeRangeHasBeenSet() const
{
    return m_packetSizeRangeHasBeenSet;
}

PortRange PacketFilterRule::GetSourcePortRange() const
{
    return m_sourcePortRange;
}

void PacketFilterRule::SetSourcePortRange(const PortRange& _sourcePortRange)
{
    m_sourcePortRange = _sourcePortRange;
    m_sourcePortRangeHasBeenSet = true;
}

bool PacketFilterRule::SourcePortRangeHasBeenSet() const
{
    return m_sourcePortRangeHasBeenSet;
}

PortRange PacketFilterRule::GetDestinationPortRange() const
{
    return m_destinationPortRange;
}

void PacketFilterRule::SetDestinationPortRange(const PortRange& _destinationPortRange)
{
    m_destinationPortRange = _destinationPortRange;
    m_destinationPortRangeHasBeenSet = true;
}

bool PacketFilterRule::DestinationPortRangeHasBeenSet() const
{
    return m_destinationPortRangeHasBeenSet;
}

vector<PacketFilterCondition> PacketFilterRule::GetPacketFilterConditions() const
{
    return m_packetFilterConditions;
}

void PacketFilterRule::SetPacketFilterConditions(const vector<PacketFilterCondition>& _packetFilterConditions)
{
    m_packetFilterConditions = _packetFilterConditions;
    m_packetFilterConditionsHasBeenSet = true;
}

bool PacketFilterRule::PacketFilterConditionsHasBeenSet() const
{
    return m_packetFilterConditionsHasBeenSet;
}


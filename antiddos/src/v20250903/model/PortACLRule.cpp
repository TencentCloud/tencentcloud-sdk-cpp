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

#include <tencentcloud/antiddos/v20250903/model/PortACLRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20250903::Model;
using namespace std;

PortACLRule::PortACLRule() :
    m_sourcePortRangeHasBeenSet(false),
    m_destinationPortRangeHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_actionHasBeenSet(false)
{
}

CoreInternalOutcome PortACLRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SourcePortRange") && !value["SourcePortRange"].IsNull())
    {
        if (!value["SourcePortRange"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PortACLRule.SourcePortRange` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `PortACLRule.DestinationPortRange` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_destinationPortRange.Deserialize(value["DestinationPortRange"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_destinationPortRangeHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PortACLRule.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PortACLRule.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PortACLRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

}


PortRange PortACLRule::GetSourcePortRange() const
{
    return m_sourcePortRange;
}

void PortACLRule::SetSourcePortRange(const PortRange& _sourcePortRange)
{
    m_sourcePortRange = _sourcePortRange;
    m_sourcePortRangeHasBeenSet = true;
}

bool PortACLRule::SourcePortRangeHasBeenSet() const
{
    return m_sourcePortRangeHasBeenSet;
}

PortRange PortACLRule::GetDestinationPortRange() const
{
    return m_destinationPortRange;
}

void PortACLRule::SetDestinationPortRange(const PortRange& _destinationPortRange)
{
    m_destinationPortRange = _destinationPortRange;
    m_destinationPortRangeHasBeenSet = true;
}

bool PortACLRule::DestinationPortRangeHasBeenSet() const
{
    return m_destinationPortRangeHasBeenSet;
}

string PortACLRule::GetProtocol() const
{
    return m_protocol;
}

void PortACLRule::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool PortACLRule::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string PortACLRule::GetAction() const
{
    return m_action;
}

void PortACLRule::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool PortACLRule::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}


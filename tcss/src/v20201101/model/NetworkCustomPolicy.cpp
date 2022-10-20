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

#include <tencentcloud/tcss/v20201101/model/NetworkCustomPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

NetworkCustomPolicy::NetworkCustomPolicy() :
    m_directionHasBeenSet(false),
    m_portsHasBeenSet(false),
    m_peerHasBeenSet(false)
{
}

CoreInternalOutcome NetworkCustomPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Direction") && !value["Direction"].IsNull())
    {
        if (!value["Direction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkCustomPolicy.Direction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_direction = string(value["Direction"].GetString());
        m_directionHasBeenSet = true;
    }

    if (value.HasMember("Ports") && !value["Ports"].IsNull())
    {
        if (!value["Ports"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NetworkCustomPolicy.Ports` is not array type"));

        const rapidjson::Value &tmpValue = value["Ports"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NetworkPorts item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ports.push_back(item);
        }
        m_portsHasBeenSet = true;
    }

    if (value.HasMember("Peer") && !value["Peer"].IsNull())
    {
        if (!value["Peer"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NetworkCustomPolicy.Peer` is not array type"));

        const rapidjson::Value &tmpValue = value["Peer"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NetworkPeer item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_peer.push_back(item);
        }
        m_peerHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NetworkCustomPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_directionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Direction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_direction.c_str(), allocator).Move(), allocator);
    }

    if (m_portsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ports";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ports.begin(); itr != m_ports.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_peerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Peer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_peer.begin(); itr != m_peer.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string NetworkCustomPolicy::GetDirection() const
{
    return m_direction;
}

void NetworkCustomPolicy::SetDirection(const string& _direction)
{
    m_direction = _direction;
    m_directionHasBeenSet = true;
}

bool NetworkCustomPolicy::DirectionHasBeenSet() const
{
    return m_directionHasBeenSet;
}

vector<NetworkPorts> NetworkCustomPolicy::GetPorts() const
{
    return m_ports;
}

void NetworkCustomPolicy::SetPorts(const vector<NetworkPorts>& _ports)
{
    m_ports = _ports;
    m_portsHasBeenSet = true;
}

bool NetworkCustomPolicy::PortsHasBeenSet() const
{
    return m_portsHasBeenSet;
}

vector<NetworkPeer> NetworkCustomPolicy::GetPeer() const
{
    return m_peer;
}

void NetworkCustomPolicy::SetPeer(const vector<NetworkPeer>& _peer)
{
    m_peer = _peer;
    m_peerHasBeenSet = true;
}

bool NetworkCustomPolicy::PeerHasBeenSet() const
{
    return m_peerHasBeenSet;
}


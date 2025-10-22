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

#include <tencentcloud/clb/v20180317/model/ListenerBackend.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

ListenerBackend::ListenerBackend() :
    m_listenerIdHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_portHasBeenSet(false),
    m_rulesHasBeenSet(false),
    m_targetsHasBeenSet(false),
    m_endPortHasBeenSet(false)
{
}

CoreInternalOutcome ListenerBackend::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ListenerId") && !value["ListenerId"].IsNull())
    {
        if (!value["ListenerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListenerBackend.ListenerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerId = string(value["ListenerId"].GetString());
        m_listenerIdHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListenerBackend.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ListenerBackend.Port` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetInt64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Rules") && !value["Rules"].IsNull())
    {
        if (!value["Rules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ListenerBackend.Rules` is not array type"));

        const rapidjson::Value &tmpValue = value["Rules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RuleTargets item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_rules.push_back(item);
        }
        m_rulesHasBeenSet = true;
    }

    if (value.HasMember("Targets") && !value["Targets"].IsNull())
    {
        if (!value["Targets"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ListenerBackend.Targets` is not array type"));

        const rapidjson::Value &tmpValue = value["Targets"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Backend item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_targets.push_back(item);
        }
        m_targetsHasBeenSet = true;
    }

    if (value.HasMember("EndPort") && !value["EndPort"].IsNull())
    {
        if (!value["EndPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ListenerBackend.EndPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endPort = value["EndPort"].GetInt64();
        m_endPortHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ListenerBackend::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_listenerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_listenerId.c_str(), allocator).Move(), allocator);
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
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_rulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rules.begin(); itr != m_rules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_targetsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Targets";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_targets.begin(); itr != m_targets.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_endPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endPort, allocator);
    }

}


string ListenerBackend::GetListenerId() const
{
    return m_listenerId;
}

void ListenerBackend::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool ListenerBackend::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

string ListenerBackend::GetProtocol() const
{
    return m_protocol;
}

void ListenerBackend::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool ListenerBackend::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

int64_t ListenerBackend::GetPort() const
{
    return m_port;
}

void ListenerBackend::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool ListenerBackend::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

vector<RuleTargets> ListenerBackend::GetRules() const
{
    return m_rules;
}

void ListenerBackend::SetRules(const vector<RuleTargets>& _rules)
{
    m_rules = _rules;
    m_rulesHasBeenSet = true;
}

bool ListenerBackend::RulesHasBeenSet() const
{
    return m_rulesHasBeenSet;
}

vector<Backend> ListenerBackend::GetTargets() const
{
    return m_targets;
}

void ListenerBackend::SetTargets(const vector<Backend>& _targets)
{
    m_targets = _targets;
    m_targetsHasBeenSet = true;
}

bool ListenerBackend::TargetsHasBeenSet() const
{
    return m_targetsHasBeenSet;
}

int64_t ListenerBackend::GetEndPort() const
{
    return m_endPort;
}

void ListenerBackend::SetEndPort(const int64_t& _endPort)
{
    m_endPort = _endPort;
    m_endPortHasBeenSet = true;
}

bool ListenerBackend::EndPortHasBeenSet() const
{
    return m_endPortHasBeenSet;
}


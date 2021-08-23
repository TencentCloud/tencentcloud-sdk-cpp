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

#include <tencentcloud/bmlb/v20180625/model/DevicesBindInfoL7Listener.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bmlb::V20180625::Model;
using namespace std;

DevicesBindInfoL7Listener::DevicesBindInfoL7Listener() :
    m_listenerIdHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_loadBalancerPortHasBeenSet(false),
    m_ruleSetHasBeenSet(false)
{
}

CoreInternalOutcome DevicesBindInfoL7Listener::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ListenerId") && !value["ListenerId"].IsNull())
    {
        if (!value["ListenerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DevicesBindInfoL7Listener.ListenerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerId = string(value["ListenerId"].GetString());
        m_listenerIdHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DevicesBindInfoL7Listener.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancerPort") && !value["LoadBalancerPort"].IsNull())
    {
        if (!value["LoadBalancerPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DevicesBindInfoL7Listener.LoadBalancerPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancerPort = value["LoadBalancerPort"].GetInt64();
        m_loadBalancerPortHasBeenSet = true;
    }

    if (value.HasMember("RuleSet") && !value["RuleSet"].IsNull())
    {
        if (!value["RuleSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DevicesBindInfoL7Listener.RuleSet` is not array type"));

        const rapidjson::Value &tmpValue = value["RuleSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DevicesBindInfoRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ruleSet.push_back(item);
        }
        m_ruleSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DevicesBindInfoL7Listener::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_loadBalancerPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loadBalancerPort, allocator);
    }

    if (m_ruleSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ruleSet.begin(); itr != m_ruleSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string DevicesBindInfoL7Listener::GetListenerId() const
{
    return m_listenerId;
}

void DevicesBindInfoL7Listener::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool DevicesBindInfoL7Listener::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

string DevicesBindInfoL7Listener::GetProtocol() const
{
    return m_protocol;
}

void DevicesBindInfoL7Listener::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool DevicesBindInfoL7Listener::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

int64_t DevicesBindInfoL7Listener::GetLoadBalancerPort() const
{
    return m_loadBalancerPort;
}

void DevicesBindInfoL7Listener::SetLoadBalancerPort(const int64_t& _loadBalancerPort)
{
    m_loadBalancerPort = _loadBalancerPort;
    m_loadBalancerPortHasBeenSet = true;
}

bool DevicesBindInfoL7Listener::LoadBalancerPortHasBeenSet() const
{
    return m_loadBalancerPortHasBeenSet;
}

vector<DevicesBindInfoRule> DevicesBindInfoL7Listener::GetRuleSet() const
{
    return m_ruleSet;
}

void DevicesBindInfoL7Listener::SetRuleSet(const vector<DevicesBindInfoRule>& _ruleSet)
{
    m_ruleSet = _ruleSet;
    m_ruleSetHasBeenSet = true;
}

bool DevicesBindInfoL7Listener::RuleSetHasBeenSet() const
{
    return m_ruleSetHasBeenSet;
}


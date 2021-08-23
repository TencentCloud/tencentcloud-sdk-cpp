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

#include <tencentcloud/bmlb/v20180625/model/DevicesBindInfoL4Listener.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bmlb::V20180625::Model;
using namespace std;

DevicesBindInfoL4Listener::DevicesBindInfoL4Listener() :
    m_listenerIdHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_loadBalancerPortHasBeenSet(false),
    m_backendSetHasBeenSet(false)
{
}

CoreInternalOutcome DevicesBindInfoL4Listener::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ListenerId") && !value["ListenerId"].IsNull())
    {
        if (!value["ListenerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DevicesBindInfoL4Listener.ListenerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerId = string(value["ListenerId"].GetString());
        m_listenerIdHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DevicesBindInfoL4Listener.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancerPort") && !value["LoadBalancerPort"].IsNull())
    {
        if (!value["LoadBalancerPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DevicesBindInfoL4Listener.LoadBalancerPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancerPort = value["LoadBalancerPort"].GetInt64();
        m_loadBalancerPortHasBeenSet = true;
    }

    if (value.HasMember("BackendSet") && !value["BackendSet"].IsNull())
    {
        if (!value["BackendSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DevicesBindInfoL4Listener.BackendSet` is not array type"));

        const rapidjson::Value &tmpValue = value["BackendSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DevicesBindInfoBackend item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_backendSet.push_back(item);
        }
        m_backendSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DevicesBindInfoL4Listener::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_backendSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackendSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_backendSet.begin(); itr != m_backendSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string DevicesBindInfoL4Listener::GetListenerId() const
{
    return m_listenerId;
}

void DevicesBindInfoL4Listener::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool DevicesBindInfoL4Listener::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

string DevicesBindInfoL4Listener::GetProtocol() const
{
    return m_protocol;
}

void DevicesBindInfoL4Listener::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool DevicesBindInfoL4Listener::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

int64_t DevicesBindInfoL4Listener::GetLoadBalancerPort() const
{
    return m_loadBalancerPort;
}

void DevicesBindInfoL4Listener::SetLoadBalancerPort(const int64_t& _loadBalancerPort)
{
    m_loadBalancerPort = _loadBalancerPort;
    m_loadBalancerPortHasBeenSet = true;
}

bool DevicesBindInfoL4Listener::LoadBalancerPortHasBeenSet() const
{
    return m_loadBalancerPortHasBeenSet;
}

vector<DevicesBindInfoBackend> DevicesBindInfoL4Listener::GetBackendSet() const
{
    return m_backendSet;
}

void DevicesBindInfoL4Listener::SetBackendSet(const vector<DevicesBindInfoBackend>& _backendSet)
{
    m_backendSet = _backendSet;
    m_backendSetHasBeenSet = true;
}

bool DevicesBindInfoL4Listener::BackendSetHasBeenSet() const
{
    return m_backendSetHasBeenSet;
}


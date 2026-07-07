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

#include <tencentcloud/alb/v20251030/model/RelatedListener.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

RelatedListener::RelatedListener() :
    m_listenerIdHasBeenSet(false),
    m_listenerPortHasBeenSet(false),
    m_listenerProtocolHasBeenSet(false),
    m_loadBalancerIdHasBeenSet(false)
{
}

CoreInternalOutcome RelatedListener::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ListenerId") && !value["ListenerId"].IsNull())
    {
        if (!value["ListenerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RelatedListener.ListenerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerId = string(value["ListenerId"].GetString());
        m_listenerIdHasBeenSet = true;
    }

    if (value.HasMember("ListenerPort") && !value["ListenerPort"].IsNull())
    {
        if (!value["ListenerPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RelatedListener.ListenerPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_listenerPort = value["ListenerPort"].GetInt64();
        m_listenerPortHasBeenSet = true;
    }

    if (value.HasMember("ListenerProtocol") && !value["ListenerProtocol"].IsNull())
    {
        if (!value["ListenerProtocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RelatedListener.ListenerProtocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerProtocol = string(value["ListenerProtocol"].GetString());
        m_listenerProtocolHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancerId") && !value["LoadBalancerId"].IsNull())
    {
        if (!value["LoadBalancerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RelatedListener.LoadBalancerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancerId = string(value["LoadBalancerId"].GetString());
        m_loadBalancerIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RelatedListener::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_listenerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_listenerId.c_str(), allocator).Move(), allocator);
    }

    if (m_listenerPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_listenerPort, allocator);
    }

    if (m_listenerProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerProtocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_listenerProtocol.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loadBalancerId.c_str(), allocator).Move(), allocator);
    }

}


string RelatedListener::GetListenerId() const
{
    return m_listenerId;
}

void RelatedListener::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool RelatedListener::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

int64_t RelatedListener::GetListenerPort() const
{
    return m_listenerPort;
}

void RelatedListener::SetListenerPort(const int64_t& _listenerPort)
{
    m_listenerPort = _listenerPort;
    m_listenerPortHasBeenSet = true;
}

bool RelatedListener::ListenerPortHasBeenSet() const
{
    return m_listenerPortHasBeenSet;
}

string RelatedListener::GetListenerProtocol() const
{
    return m_listenerProtocol;
}

void RelatedListener::SetListenerProtocol(const string& _listenerProtocol)
{
    m_listenerProtocol = _listenerProtocol;
    m_listenerProtocolHasBeenSet = true;
}

bool RelatedListener::ListenerProtocolHasBeenSet() const
{
    return m_listenerProtocolHasBeenSet;
}

string RelatedListener::GetLoadBalancerId() const
{
    return m_loadBalancerId;
}

void RelatedListener::SetLoadBalancerId(const string& _loadBalancerId)
{
    m_loadBalancerId = _loadBalancerId;
    m_loadBalancerIdHasBeenSet = true;
}

bool RelatedListener::LoadBalancerIdHasBeenSet() const
{
    return m_loadBalancerIdHasBeenSet;
}


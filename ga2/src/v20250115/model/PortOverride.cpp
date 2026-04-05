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

#include <tencentcloud/ga2/v20250115/model/PortOverride.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ga2::V20250115::Model;
using namespace std;

PortOverride::PortOverride() :
    m_listenerPortHasBeenSet(false),
    m_endpointPortHasBeenSet(false)
{
}

CoreInternalOutcome PortOverride::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ListenerPort") && !value["ListenerPort"].IsNull())
    {
        if (!value["ListenerPort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PortOverride.ListenerPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_listenerPort = value["ListenerPort"].GetUint64();
        m_listenerPortHasBeenSet = true;
    }

    if (value.HasMember("EndpointPort") && !value["EndpointPort"].IsNull())
    {
        if (!value["EndpointPort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PortOverride.EndpointPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_endpointPort = value["EndpointPort"].GetUint64();
        m_endpointPortHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PortOverride::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_listenerPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_listenerPort, allocator);
    }

    if (m_endpointPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndpointPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endpointPort, allocator);
    }

}


uint64_t PortOverride::GetListenerPort() const
{
    return m_listenerPort;
}

void PortOverride::SetListenerPort(const uint64_t& _listenerPort)
{
    m_listenerPort = _listenerPort;
    m_listenerPortHasBeenSet = true;
}

bool PortOverride::ListenerPortHasBeenSet() const
{
    return m_listenerPortHasBeenSet;
}

uint64_t PortOverride::GetEndpointPort() const
{
    return m_endpointPort;
}

void PortOverride::SetEndpointPort(const uint64_t& _endpointPort)
{
    m_endpointPort = _endpointPort;
    m_endpointPortHasBeenSet = true;
}

bool PortOverride::EndpointPortHasBeenSet() const
{
    return m_endpointPortHasBeenSet;
}


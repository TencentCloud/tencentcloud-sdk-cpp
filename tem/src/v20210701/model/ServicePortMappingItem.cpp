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

#include <tencentcloud/tem/v20210701/model/ServicePortMappingItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tem::V20210701::Model;
using namespace std;

ServicePortMappingItem::ServicePortMappingItem() :
    m_portHasBeenSet(false),
    m_targetPortHasBeenSet(false),
    m_protocolHasBeenSet(false)
{
}

CoreInternalOutcome ServicePortMappingItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServicePortMappingItem.Port` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetInt64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("TargetPort") && !value["TargetPort"].IsNull())
    {
        if (!value["TargetPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServicePortMappingItem.TargetPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_targetPort = value["TargetPort"].GetInt64();
        m_targetPortHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServicePortMappingItem.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServicePortMappingItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_targetPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_targetPort, allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

}


int64_t ServicePortMappingItem::GetPort() const
{
    return m_port;
}

void ServicePortMappingItem::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool ServicePortMappingItem::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

int64_t ServicePortMappingItem::GetTargetPort() const
{
    return m_targetPort;
}

void ServicePortMappingItem::SetTargetPort(const int64_t& _targetPort)
{
    m_targetPort = _targetPort;
    m_targetPortHasBeenSet = true;
}

bool ServicePortMappingItem::TargetPortHasBeenSet() const
{
    return m_targetPortHasBeenSet;
}

string ServicePortMappingItem::GetProtocol() const
{
    return m_protocol;
}

void ServicePortMappingItem::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool ServicePortMappingItem::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}


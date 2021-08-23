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

#include <tencentcloud/gse/v20191112/model/InboundPermissionAuthorization.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

InboundPermissionAuthorization::InboundPermissionAuthorization() :
    m_fromPortHasBeenSet(false),
    m_ipRangeHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_toPortHasBeenSet(false)
{
}

CoreInternalOutcome InboundPermissionAuthorization::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FromPort") && !value["FromPort"].IsNull())
    {
        if (!value["FromPort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InboundPermissionAuthorization.FromPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fromPort = value["FromPort"].GetUint64();
        m_fromPortHasBeenSet = true;
    }

    if (value.HasMember("IpRange") && !value["IpRange"].IsNull())
    {
        if (!value["IpRange"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InboundPermissionAuthorization.IpRange` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipRange = string(value["IpRange"].GetString());
        m_ipRangeHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InboundPermissionAuthorization.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("ToPort") && !value["ToPort"].IsNull())
    {
        if (!value["ToPort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InboundPermissionAuthorization.ToPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_toPort = value["ToPort"].GetUint64();
        m_toPortHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InboundPermissionAuthorization::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fromPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FromPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fromPort, allocator);
    }

    if (m_ipRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipRange.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_toPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_toPort, allocator);
    }

}


uint64_t InboundPermissionAuthorization::GetFromPort() const
{
    return m_fromPort;
}

void InboundPermissionAuthorization::SetFromPort(const uint64_t& _fromPort)
{
    m_fromPort = _fromPort;
    m_fromPortHasBeenSet = true;
}

bool InboundPermissionAuthorization::FromPortHasBeenSet() const
{
    return m_fromPortHasBeenSet;
}

string InboundPermissionAuthorization::GetIpRange() const
{
    return m_ipRange;
}

void InboundPermissionAuthorization::SetIpRange(const string& _ipRange)
{
    m_ipRange = _ipRange;
    m_ipRangeHasBeenSet = true;
}

bool InboundPermissionAuthorization::IpRangeHasBeenSet() const
{
    return m_ipRangeHasBeenSet;
}

string InboundPermissionAuthorization::GetProtocol() const
{
    return m_protocol;
}

void InboundPermissionAuthorization::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool InboundPermissionAuthorization::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

uint64_t InboundPermissionAuthorization::GetToPort() const
{
    return m_toPort;
}

void InboundPermissionAuthorization::SetToPort(const uint64_t& _toPort)
{
    m_toPort = _toPort;
    m_toPortHasBeenSet = true;
}

bool InboundPermissionAuthorization::ToPortHasBeenSet() const
{
    return m_toPortHasBeenSet;
}


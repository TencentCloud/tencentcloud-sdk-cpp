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

#include <tencentcloud/apigateway/v20180808/model/NetworkConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

NetworkConfig::NetworkConfig() :
    m_internetMaxBandwidthOutHasBeenSet(false),
    m_enableInternetInboundHasBeenSet(false),
    m_enableInternetOutboundHasBeenSet(false),
    m_inboundIpAddressesHasBeenSet(false),
    m_outboundIpAddressesHasBeenSet(false)
{
}

CoreInternalOutcome NetworkConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InternetMaxBandwidthOut") && !value["InternetMaxBandwidthOut"].IsNull())
    {
        if (!value["InternetMaxBandwidthOut"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkConfig.InternetMaxBandwidthOut` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_internetMaxBandwidthOut = value["InternetMaxBandwidthOut"].GetInt64();
        m_internetMaxBandwidthOutHasBeenSet = true;
    }

    if (value.HasMember("EnableInternetInbound") && !value["EnableInternetInbound"].IsNull())
    {
        if (!value["EnableInternetInbound"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkConfig.EnableInternetInbound` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableInternetInbound = value["EnableInternetInbound"].GetBool();
        m_enableInternetInboundHasBeenSet = true;
    }

    if (value.HasMember("EnableInternetOutbound") && !value["EnableInternetOutbound"].IsNull())
    {
        if (!value["EnableInternetOutbound"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkConfig.EnableInternetOutbound` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableInternetOutbound = value["EnableInternetOutbound"].GetBool();
        m_enableInternetOutboundHasBeenSet = true;
    }

    if (value.HasMember("InboundIpAddresses") && !value["InboundIpAddresses"].IsNull())
    {
        if (!value["InboundIpAddresses"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NetworkConfig.InboundIpAddresses` is not array type"));

        const rapidjson::Value &tmpValue = value["InboundIpAddresses"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_inboundIpAddresses.push_back((*itr).GetString());
        }
        m_inboundIpAddressesHasBeenSet = true;
    }

    if (value.HasMember("OutboundIpAddresses") && !value["OutboundIpAddresses"].IsNull())
    {
        if (!value["OutboundIpAddresses"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NetworkConfig.OutboundIpAddresses` is not array type"));

        const rapidjson::Value &tmpValue = value["OutboundIpAddresses"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_outboundIpAddresses.push_back((*itr).GetString());
        }
        m_outboundIpAddressesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NetworkConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_internetMaxBandwidthOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetMaxBandwidthOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_internetMaxBandwidthOut, allocator);
    }

    if (m_enableInternetInboundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableInternetInbound";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableInternetInbound, allocator);
    }

    if (m_enableInternetOutboundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableInternetOutbound";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableInternetOutbound, allocator);
    }

    if (m_inboundIpAddressesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InboundIpAddresses";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_inboundIpAddresses.begin(); itr != m_inboundIpAddresses.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_outboundIpAddressesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutboundIpAddresses";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_outboundIpAddresses.begin(); itr != m_outboundIpAddresses.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


int64_t NetworkConfig::GetInternetMaxBandwidthOut() const
{
    return m_internetMaxBandwidthOut;
}

void NetworkConfig::SetInternetMaxBandwidthOut(const int64_t& _internetMaxBandwidthOut)
{
    m_internetMaxBandwidthOut = _internetMaxBandwidthOut;
    m_internetMaxBandwidthOutHasBeenSet = true;
}

bool NetworkConfig::InternetMaxBandwidthOutHasBeenSet() const
{
    return m_internetMaxBandwidthOutHasBeenSet;
}

bool NetworkConfig::GetEnableInternetInbound() const
{
    return m_enableInternetInbound;
}

void NetworkConfig::SetEnableInternetInbound(const bool& _enableInternetInbound)
{
    m_enableInternetInbound = _enableInternetInbound;
    m_enableInternetInboundHasBeenSet = true;
}

bool NetworkConfig::EnableInternetInboundHasBeenSet() const
{
    return m_enableInternetInboundHasBeenSet;
}

bool NetworkConfig::GetEnableInternetOutbound() const
{
    return m_enableInternetOutbound;
}

void NetworkConfig::SetEnableInternetOutbound(const bool& _enableInternetOutbound)
{
    m_enableInternetOutbound = _enableInternetOutbound;
    m_enableInternetOutboundHasBeenSet = true;
}

bool NetworkConfig::EnableInternetOutboundHasBeenSet() const
{
    return m_enableInternetOutboundHasBeenSet;
}

vector<string> NetworkConfig::GetInboundIpAddresses() const
{
    return m_inboundIpAddresses;
}

void NetworkConfig::SetInboundIpAddresses(const vector<string>& _inboundIpAddresses)
{
    m_inboundIpAddresses = _inboundIpAddresses;
    m_inboundIpAddressesHasBeenSet = true;
}

bool NetworkConfig::InboundIpAddressesHasBeenSet() const
{
    return m_inboundIpAddressesHasBeenSet;
}

vector<string> NetworkConfig::GetOutboundIpAddresses() const
{
    return m_outboundIpAddresses;
}

void NetworkConfig::SetOutboundIpAddresses(const vector<string>& _outboundIpAddresses)
{
    m_outboundIpAddresses = _outboundIpAddresses;
    m_outboundIpAddressesHasBeenSet = true;
}

bool NetworkConfig::OutboundIpAddressesHasBeenSet() const
{
    return m_outboundIpAddressesHasBeenSet;
}


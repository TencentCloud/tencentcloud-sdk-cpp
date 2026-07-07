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

#include <tencentcloud/alb/v20251030/model/LoadBalancerAddress.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

LoadBalancerAddress::LoadBalancerAddress() :
    m_iPv4AddressHasBeenSet(false),
    m_iPv6AddressHasBeenSet(false)
{
}

CoreInternalOutcome LoadBalancerAddress::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IPv4Address") && !value["IPv4Address"].IsNull())
    {
        if (!value["IPv4Address"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LoadBalancerAddress.IPv4Address` is not array type"));

        const rapidjson::Value &tmpValue = value["IPv4Address"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IPAddressInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_iPv4Address.push_back(item);
        }
        m_iPv4AddressHasBeenSet = true;
    }

    if (value.HasMember("IPv6Address") && !value["IPv6Address"].IsNull())
    {
        if (!value["IPv6Address"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LoadBalancerAddress.IPv6Address` is not array type"));

        const rapidjson::Value &tmpValue = value["IPv6Address"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IPAddressInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_iPv6Address.push_back(item);
        }
        m_iPv6AddressHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LoadBalancerAddress::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iPv4AddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPv4Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_iPv4Address.begin(); itr != m_iPv4Address.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_iPv6AddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPv6Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_iPv6Address.begin(); itr != m_iPv6Address.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<IPAddressInfo> LoadBalancerAddress::GetIPv4Address() const
{
    return m_iPv4Address;
}

void LoadBalancerAddress::SetIPv4Address(const vector<IPAddressInfo>& _iPv4Address)
{
    m_iPv4Address = _iPv4Address;
    m_iPv4AddressHasBeenSet = true;
}

bool LoadBalancerAddress::IPv4AddressHasBeenSet() const
{
    return m_iPv4AddressHasBeenSet;
}

vector<IPAddressInfo> LoadBalancerAddress::GetIPv6Address() const
{
    return m_iPv6Address;
}

void LoadBalancerAddress::SetIPv6Address(const vector<IPAddressInfo>& _iPv6Address)
{
    m_iPv6Address = _iPv6Address;
    m_iPv6AddressHasBeenSet = true;
}

bool LoadBalancerAddress::IPv6AddressHasBeenSet() const
{
    return m_iPv6AddressHasBeenSet;
}


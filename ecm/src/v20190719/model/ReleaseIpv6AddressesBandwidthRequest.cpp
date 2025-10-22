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

#include <tencentcloud/ecm/v20190719/model/ReleaseIpv6AddressesBandwidthRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

ReleaseIpv6AddressesBandwidthRequest::ReleaseIpv6AddressesBandwidthRequest() :
    m_ecmRegionHasBeenSet(false),
    m_ipv6AddressesHasBeenSet(false),
    m_ipv6AddressIdsHasBeenSet(false)
{
}

string ReleaseIpv6AddressesBandwidthRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ecmRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EcmRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ecmRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_ipv6AddressesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ipv6Addresses";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ipv6Addresses.begin(); itr != m_ipv6Addresses.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ipv6AddressIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ipv6AddressIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ipv6AddressIds.begin(); itr != m_ipv6AddressIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ReleaseIpv6AddressesBandwidthRequest::GetEcmRegion() const
{
    return m_ecmRegion;
}

void ReleaseIpv6AddressesBandwidthRequest::SetEcmRegion(const string& _ecmRegion)
{
    m_ecmRegion = _ecmRegion;
    m_ecmRegionHasBeenSet = true;
}

bool ReleaseIpv6AddressesBandwidthRequest::EcmRegionHasBeenSet() const
{
    return m_ecmRegionHasBeenSet;
}

vector<string> ReleaseIpv6AddressesBandwidthRequest::GetIpv6Addresses() const
{
    return m_ipv6Addresses;
}

void ReleaseIpv6AddressesBandwidthRequest::SetIpv6Addresses(const vector<string>& _ipv6Addresses)
{
    m_ipv6Addresses = _ipv6Addresses;
    m_ipv6AddressesHasBeenSet = true;
}

bool ReleaseIpv6AddressesBandwidthRequest::Ipv6AddressesHasBeenSet() const
{
    return m_ipv6AddressesHasBeenSet;
}

vector<string> ReleaseIpv6AddressesBandwidthRequest::GetIpv6AddressIds() const
{
    return m_ipv6AddressIds;
}

void ReleaseIpv6AddressesBandwidthRequest::SetIpv6AddressIds(const vector<string>& _ipv6AddressIds)
{
    m_ipv6AddressIds = _ipv6AddressIds;
    m_ipv6AddressIdsHasBeenSet = true;
}

bool ReleaseIpv6AddressesBandwidthRequest::Ipv6AddressIdsHasBeenSet() const
{
    return m_ipv6AddressIdsHasBeenSet;
}



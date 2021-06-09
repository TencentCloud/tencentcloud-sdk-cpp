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

#include <tencentcloud/vpc/v20170312/model/ModifyIp6AddressesBandwidthRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

ModifyIp6AddressesBandwidthRequest::ModifyIp6AddressesBandwidthRequest() :
    m_internetMaxBandwidthOutHasBeenSet(false),
    m_ip6AddressesHasBeenSet(false),
    m_ip6AddressIdsHasBeenSet(false)
{
}

string ModifyIp6AddressesBandwidthRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_internetMaxBandwidthOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetMaxBandwidthOut";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_internetMaxBandwidthOut, allocator);
    }

    if (m_ip6AddressesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip6Addresses";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ip6Addresses.begin(); itr != m_ip6Addresses.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ip6AddressIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip6AddressIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ip6AddressIds.begin(); itr != m_ip6AddressIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyIp6AddressesBandwidthRequest::GetInternetMaxBandwidthOut() const
{
    return m_internetMaxBandwidthOut;
}

void ModifyIp6AddressesBandwidthRequest::SetInternetMaxBandwidthOut(const int64_t& _internetMaxBandwidthOut)
{
    m_internetMaxBandwidthOut = _internetMaxBandwidthOut;
    m_internetMaxBandwidthOutHasBeenSet = true;
}

bool ModifyIp6AddressesBandwidthRequest::InternetMaxBandwidthOutHasBeenSet() const
{
    return m_internetMaxBandwidthOutHasBeenSet;
}

vector<string> ModifyIp6AddressesBandwidthRequest::GetIp6Addresses() const
{
    return m_ip6Addresses;
}

void ModifyIp6AddressesBandwidthRequest::SetIp6Addresses(const vector<string>& _ip6Addresses)
{
    m_ip6Addresses = _ip6Addresses;
    m_ip6AddressesHasBeenSet = true;
}

bool ModifyIp6AddressesBandwidthRequest::Ip6AddressesHasBeenSet() const
{
    return m_ip6AddressesHasBeenSet;
}

vector<string> ModifyIp6AddressesBandwidthRequest::GetIp6AddressIds() const
{
    return m_ip6AddressIds;
}

void ModifyIp6AddressesBandwidthRequest::SetIp6AddressIds(const vector<string>& _ip6AddressIds)
{
    m_ip6AddressIds = _ip6AddressIds;
    m_ip6AddressIdsHasBeenSet = true;
}

bool ModifyIp6AddressesBandwidthRequest::Ip6AddressIdsHasBeenSet() const
{
    return m_ip6AddressIdsHasBeenSet;
}



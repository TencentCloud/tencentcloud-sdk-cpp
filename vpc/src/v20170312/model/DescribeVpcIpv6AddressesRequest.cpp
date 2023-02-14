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

#include <tencentcloud/vpc/v20170312/model/DescribeVpcIpv6AddressesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

DescribeVpcIpv6AddressesRequest::DescribeVpcIpv6AddressesRequest() :
    m_vpcIdHasBeenSet(false),
    m_ipv6AddressesHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_subnetIdHasBeenSet(false)
{
}

string DescribeVpcIpv6AddressesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
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

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeVpcIpv6AddressesRequest::GetVpcId() const
{
    return m_vpcId;
}

void DescribeVpcIpv6AddressesRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool DescribeVpcIpv6AddressesRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

vector<string> DescribeVpcIpv6AddressesRequest::GetIpv6Addresses() const
{
    return m_ipv6Addresses;
}

void DescribeVpcIpv6AddressesRequest::SetIpv6Addresses(const vector<string>& _ipv6Addresses)
{
    m_ipv6Addresses = _ipv6Addresses;
    m_ipv6AddressesHasBeenSet = true;
}

bool DescribeVpcIpv6AddressesRequest::Ipv6AddressesHasBeenSet() const
{
    return m_ipv6AddressesHasBeenSet;
}

uint64_t DescribeVpcIpv6AddressesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeVpcIpv6AddressesRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeVpcIpv6AddressesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeVpcIpv6AddressesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeVpcIpv6AddressesRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeVpcIpv6AddressesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeVpcIpv6AddressesRequest::GetSubnetId() const
{
    return m_subnetId;
}

void DescribeVpcIpv6AddressesRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool DescribeVpcIpv6AddressesRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}



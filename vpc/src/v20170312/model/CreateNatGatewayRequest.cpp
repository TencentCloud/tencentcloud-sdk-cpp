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

#include <tencentcloud/vpc/v20170312/model/CreateNatGatewayRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace rapidjson;
using namespace std;

CreateNatGatewayRequest::CreateNatGatewayRequest() :
    m_natGatewayNameHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_internetMaxBandwidthOutHasBeenSet(false),
    m_maxConcurrentConnectionHasBeenSet(false),
    m_addressCountHasBeenSet(false),
    m_publicIpAddressesHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

string CreateNatGatewayRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_natGatewayNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NatGatewayName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_natGatewayName.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_internetMaxBandwidthOutHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InternetMaxBandwidthOut";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_internetMaxBandwidthOut, allocator);
    }

    if (m_maxConcurrentConnectionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MaxConcurrentConnection";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxConcurrentConnection, allocator);
    }

    if (m_addressCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AddressCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_addressCount, allocator);
    }

    if (m_publicIpAddressesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PublicIpAddresses";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_publicIpAddresses.begin(); itr != m_publicIpAddresses.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_zoneHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateNatGatewayRequest::GetNatGatewayName() const
{
    return m_natGatewayName;
}

void CreateNatGatewayRequest::SetNatGatewayName(const string& _natGatewayName)
{
    m_natGatewayName = _natGatewayName;
    m_natGatewayNameHasBeenSet = true;
}

bool CreateNatGatewayRequest::NatGatewayNameHasBeenSet() const
{
    return m_natGatewayNameHasBeenSet;
}

string CreateNatGatewayRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateNatGatewayRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateNatGatewayRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

uint64_t CreateNatGatewayRequest::GetInternetMaxBandwidthOut() const
{
    return m_internetMaxBandwidthOut;
}

void CreateNatGatewayRequest::SetInternetMaxBandwidthOut(const uint64_t& _internetMaxBandwidthOut)
{
    m_internetMaxBandwidthOut = _internetMaxBandwidthOut;
    m_internetMaxBandwidthOutHasBeenSet = true;
}

bool CreateNatGatewayRequest::InternetMaxBandwidthOutHasBeenSet() const
{
    return m_internetMaxBandwidthOutHasBeenSet;
}

uint64_t CreateNatGatewayRequest::GetMaxConcurrentConnection() const
{
    return m_maxConcurrentConnection;
}

void CreateNatGatewayRequest::SetMaxConcurrentConnection(const uint64_t& _maxConcurrentConnection)
{
    m_maxConcurrentConnection = _maxConcurrentConnection;
    m_maxConcurrentConnectionHasBeenSet = true;
}

bool CreateNatGatewayRequest::MaxConcurrentConnectionHasBeenSet() const
{
    return m_maxConcurrentConnectionHasBeenSet;
}

uint64_t CreateNatGatewayRequest::GetAddressCount() const
{
    return m_addressCount;
}

void CreateNatGatewayRequest::SetAddressCount(const uint64_t& _addressCount)
{
    m_addressCount = _addressCount;
    m_addressCountHasBeenSet = true;
}

bool CreateNatGatewayRequest::AddressCountHasBeenSet() const
{
    return m_addressCountHasBeenSet;
}

vector<string> CreateNatGatewayRequest::GetPublicIpAddresses() const
{
    return m_publicIpAddresses;
}

void CreateNatGatewayRequest::SetPublicIpAddresses(const vector<string>& _publicIpAddresses)
{
    m_publicIpAddresses = _publicIpAddresses;
    m_publicIpAddressesHasBeenSet = true;
}

bool CreateNatGatewayRequest::PublicIpAddressesHasBeenSet() const
{
    return m_publicIpAddressesHasBeenSet;
}

string CreateNatGatewayRequest::GetZone() const
{
    return m_zone;
}

void CreateNatGatewayRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool CreateNatGatewayRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

vector<Tag> CreateNatGatewayRequest::GetTags() const
{
    return m_tags;
}

void CreateNatGatewayRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateNatGatewayRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}



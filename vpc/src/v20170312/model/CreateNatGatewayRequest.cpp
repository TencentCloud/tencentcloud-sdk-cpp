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
using namespace std;

CreateNatGatewayRequest::CreateNatGatewayRequest() :
    m_natGatewayNameHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_internetMaxBandwidthOutHasBeenSet(false),
    m_maxConcurrentConnectionHasBeenSet(false),
    m_addressCountHasBeenSet(false),
    m_publicIpAddressesHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_stockPublicIpAddressesBandwidthOutHasBeenSet(false),
    m_publicIpAddressesBandwidthOutHasBeenSet(false),
    m_publicIpFromSameZoneHasBeenSet(false),
    m_natProductVersionHasBeenSet(false)
{
}

string CreateNatGatewayRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_natGatewayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatGatewayName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_natGatewayName.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_internetMaxBandwidthOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetMaxBandwidthOut";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_internetMaxBandwidthOut, allocator);
    }

    if (m_maxConcurrentConnectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxConcurrentConnection";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxConcurrentConnection, allocator);
    }

    if (m_addressCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_addressCount, allocator);
    }

    if (m_publicIpAddressesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIpAddresses";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_publicIpAddresses.begin(); itr != m_publicIpAddresses.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_stockPublicIpAddressesBandwidthOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StockPublicIpAddressesBandwidthOut";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_stockPublicIpAddressesBandwidthOut, allocator);
    }

    if (m_publicIpAddressesBandwidthOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIpAddressesBandwidthOut";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_publicIpAddressesBandwidthOut, allocator);
    }

    if (m_publicIpFromSameZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIpFromSameZone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_publicIpFromSameZone, allocator);
    }

    if (m_natProductVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatProductVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_natProductVersion, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
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

string CreateNatGatewayRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateNatGatewayRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateNatGatewayRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

uint64_t CreateNatGatewayRequest::GetStockPublicIpAddressesBandwidthOut() const
{
    return m_stockPublicIpAddressesBandwidthOut;
}

void CreateNatGatewayRequest::SetStockPublicIpAddressesBandwidthOut(const uint64_t& _stockPublicIpAddressesBandwidthOut)
{
    m_stockPublicIpAddressesBandwidthOut = _stockPublicIpAddressesBandwidthOut;
    m_stockPublicIpAddressesBandwidthOutHasBeenSet = true;
}

bool CreateNatGatewayRequest::StockPublicIpAddressesBandwidthOutHasBeenSet() const
{
    return m_stockPublicIpAddressesBandwidthOutHasBeenSet;
}

uint64_t CreateNatGatewayRequest::GetPublicIpAddressesBandwidthOut() const
{
    return m_publicIpAddressesBandwidthOut;
}

void CreateNatGatewayRequest::SetPublicIpAddressesBandwidthOut(const uint64_t& _publicIpAddressesBandwidthOut)
{
    m_publicIpAddressesBandwidthOut = _publicIpAddressesBandwidthOut;
    m_publicIpAddressesBandwidthOutHasBeenSet = true;
}

bool CreateNatGatewayRequest::PublicIpAddressesBandwidthOutHasBeenSet() const
{
    return m_publicIpAddressesBandwidthOutHasBeenSet;
}

bool CreateNatGatewayRequest::GetPublicIpFromSameZone() const
{
    return m_publicIpFromSameZone;
}

void CreateNatGatewayRequest::SetPublicIpFromSameZone(const bool& _publicIpFromSameZone)
{
    m_publicIpFromSameZone = _publicIpFromSameZone;
    m_publicIpFromSameZoneHasBeenSet = true;
}

bool CreateNatGatewayRequest::PublicIpFromSameZoneHasBeenSet() const
{
    return m_publicIpFromSameZoneHasBeenSet;
}

uint64_t CreateNatGatewayRequest::GetNatProductVersion() const
{
    return m_natProductVersion;
}

void CreateNatGatewayRequest::SetNatProductVersion(const uint64_t& _natProductVersion)
{
    m_natProductVersion = _natProductVersion;
    m_natProductVersionHasBeenSet = true;
}

bool CreateNatGatewayRequest::NatProductVersionHasBeenSet() const
{
    return m_natProductVersionHasBeenSet;
}



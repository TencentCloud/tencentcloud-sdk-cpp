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

#include <tencentcloud/vpc/v20170312/model/AssociateNatGatewayAddressRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

AssociateNatGatewayAddressRequest::AssociateNatGatewayAddressRequest() :
    m_natGatewayIdHasBeenSet(false),
    m_addressCountHasBeenSet(false),
    m_publicIpAddressesHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_stockPublicIpAddressesBandwidthOutHasBeenSet(false),
    m_publicIpAddressesBandwidthOutHasBeenSet(false),
    m_publicIpFromSameZoneHasBeenSet(false)
{
}

string AssociateNatGatewayAddressRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_natGatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatGatewayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_natGatewayId.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AssociateNatGatewayAddressRequest::GetNatGatewayId() const
{
    return m_natGatewayId;
}

void AssociateNatGatewayAddressRequest::SetNatGatewayId(const string& _natGatewayId)
{
    m_natGatewayId = _natGatewayId;
    m_natGatewayIdHasBeenSet = true;
}

bool AssociateNatGatewayAddressRequest::NatGatewayIdHasBeenSet() const
{
    return m_natGatewayIdHasBeenSet;
}

uint64_t AssociateNatGatewayAddressRequest::GetAddressCount() const
{
    return m_addressCount;
}

void AssociateNatGatewayAddressRequest::SetAddressCount(const uint64_t& _addressCount)
{
    m_addressCount = _addressCount;
    m_addressCountHasBeenSet = true;
}

bool AssociateNatGatewayAddressRequest::AddressCountHasBeenSet() const
{
    return m_addressCountHasBeenSet;
}

vector<string> AssociateNatGatewayAddressRequest::GetPublicIpAddresses() const
{
    return m_publicIpAddresses;
}

void AssociateNatGatewayAddressRequest::SetPublicIpAddresses(const vector<string>& _publicIpAddresses)
{
    m_publicIpAddresses = _publicIpAddresses;
    m_publicIpAddressesHasBeenSet = true;
}

bool AssociateNatGatewayAddressRequest::PublicIpAddressesHasBeenSet() const
{
    return m_publicIpAddressesHasBeenSet;
}

string AssociateNatGatewayAddressRequest::GetZone() const
{
    return m_zone;
}

void AssociateNatGatewayAddressRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool AssociateNatGatewayAddressRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

uint64_t AssociateNatGatewayAddressRequest::GetStockPublicIpAddressesBandwidthOut() const
{
    return m_stockPublicIpAddressesBandwidthOut;
}

void AssociateNatGatewayAddressRequest::SetStockPublicIpAddressesBandwidthOut(const uint64_t& _stockPublicIpAddressesBandwidthOut)
{
    m_stockPublicIpAddressesBandwidthOut = _stockPublicIpAddressesBandwidthOut;
    m_stockPublicIpAddressesBandwidthOutHasBeenSet = true;
}

bool AssociateNatGatewayAddressRequest::StockPublicIpAddressesBandwidthOutHasBeenSet() const
{
    return m_stockPublicIpAddressesBandwidthOutHasBeenSet;
}

uint64_t AssociateNatGatewayAddressRequest::GetPublicIpAddressesBandwidthOut() const
{
    return m_publicIpAddressesBandwidthOut;
}

void AssociateNatGatewayAddressRequest::SetPublicIpAddressesBandwidthOut(const uint64_t& _publicIpAddressesBandwidthOut)
{
    m_publicIpAddressesBandwidthOut = _publicIpAddressesBandwidthOut;
    m_publicIpAddressesBandwidthOutHasBeenSet = true;
}

bool AssociateNatGatewayAddressRequest::PublicIpAddressesBandwidthOutHasBeenSet() const
{
    return m_publicIpAddressesBandwidthOutHasBeenSet;
}

bool AssociateNatGatewayAddressRequest::GetPublicIpFromSameZone() const
{
    return m_publicIpFromSameZone;
}

void AssociateNatGatewayAddressRequest::SetPublicIpFromSameZone(const bool& _publicIpFromSameZone)
{
    m_publicIpFromSameZone = _publicIpFromSameZone;
    m_publicIpFromSameZoneHasBeenSet = true;
}

bool AssociateNatGatewayAddressRequest::PublicIpFromSameZoneHasBeenSet() const
{
    return m_publicIpFromSameZoneHasBeenSet;
}



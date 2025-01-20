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

#include <tencentcloud/vpc/v20170312/model/AllocateAddressesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

AllocateAddressesRequest::AllocateAddressesRequest() :
    m_addressCountHasBeenSet(false),
    m_internetServiceProviderHasBeenSet(false),
    m_internetChargeTypeHasBeenSet(false),
    m_internetMaxBandwidthOutHasBeenSet(false),
    m_addressChargePrepaidHasBeenSet(false),
    m_addressTypeHasBeenSet(false),
    m_anycastZoneHasBeenSet(false),
    m_vipClusterHasBeenSet(false),
    m_applicableForCLBHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_bandwidthPackageIdHasBeenSet(false),
    m_addressNameHasBeenSet(false),
    m_dedicatedClusterIdHasBeenSet(false),
    m_isDedicatedAddressPoolHasBeenSet(false),
    m_egressHasBeenSet(false),
    m_antiDDoSPackageIdHasBeenSet(false),
    m_clientTokenHasBeenSet(false)
{
}

string AllocateAddressesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_addressCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_addressCount, allocator);
    }

    if (m_internetServiceProviderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetServiceProvider";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_internetServiceProvider.c_str(), allocator).Move(), allocator);
    }

    if (m_internetChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetChargeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_internetChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_internetMaxBandwidthOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetMaxBandwidthOut";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_internetMaxBandwidthOut, allocator);
    }

    if (m_addressChargePrepaidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressChargePrepaid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_addressChargePrepaid.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_addressTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_addressType.c_str(), allocator).Move(), allocator);
    }

    if (m_anycastZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnycastZone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_anycastZone.c_str(), allocator).Move(), allocator);
    }

    if (m_vipClusterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VipCluster";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_vipCluster.begin(); itr != m_vipCluster.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_applicableForCLBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicableForCLB";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_applicableForCLB, allocator);
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

    if (m_bandwidthPackageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BandwidthPackageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bandwidthPackageId.c_str(), allocator).Move(), allocator);
    }

    if (m_addressNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_addressName.c_str(), allocator).Move(), allocator);
    }

    if (m_dedicatedClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DedicatedClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dedicatedClusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_isDedicatedAddressPoolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDedicatedAddressPool";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isDedicatedAddressPool, allocator);
    }

    if (m_egressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Egress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_egress.c_str(), allocator).Move(), allocator);
    }

    if (m_antiDDoSPackageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AntiDDoSPackageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_antiDDoSPackageId.c_str(), allocator).Move(), allocator);
    }

    if (m_clientTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientToken.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t AllocateAddressesRequest::GetAddressCount() const
{
    return m_addressCount;
}

void AllocateAddressesRequest::SetAddressCount(const int64_t& _addressCount)
{
    m_addressCount = _addressCount;
    m_addressCountHasBeenSet = true;
}

bool AllocateAddressesRequest::AddressCountHasBeenSet() const
{
    return m_addressCountHasBeenSet;
}

string AllocateAddressesRequest::GetInternetServiceProvider() const
{
    return m_internetServiceProvider;
}

void AllocateAddressesRequest::SetInternetServiceProvider(const string& _internetServiceProvider)
{
    m_internetServiceProvider = _internetServiceProvider;
    m_internetServiceProviderHasBeenSet = true;
}

bool AllocateAddressesRequest::InternetServiceProviderHasBeenSet() const
{
    return m_internetServiceProviderHasBeenSet;
}

string AllocateAddressesRequest::GetInternetChargeType() const
{
    return m_internetChargeType;
}

void AllocateAddressesRequest::SetInternetChargeType(const string& _internetChargeType)
{
    m_internetChargeType = _internetChargeType;
    m_internetChargeTypeHasBeenSet = true;
}

bool AllocateAddressesRequest::InternetChargeTypeHasBeenSet() const
{
    return m_internetChargeTypeHasBeenSet;
}

int64_t AllocateAddressesRequest::GetInternetMaxBandwidthOut() const
{
    return m_internetMaxBandwidthOut;
}

void AllocateAddressesRequest::SetInternetMaxBandwidthOut(const int64_t& _internetMaxBandwidthOut)
{
    m_internetMaxBandwidthOut = _internetMaxBandwidthOut;
    m_internetMaxBandwidthOutHasBeenSet = true;
}

bool AllocateAddressesRequest::InternetMaxBandwidthOutHasBeenSet() const
{
    return m_internetMaxBandwidthOutHasBeenSet;
}

AddressChargePrepaid AllocateAddressesRequest::GetAddressChargePrepaid() const
{
    return m_addressChargePrepaid;
}

void AllocateAddressesRequest::SetAddressChargePrepaid(const AddressChargePrepaid& _addressChargePrepaid)
{
    m_addressChargePrepaid = _addressChargePrepaid;
    m_addressChargePrepaidHasBeenSet = true;
}

bool AllocateAddressesRequest::AddressChargePrepaidHasBeenSet() const
{
    return m_addressChargePrepaidHasBeenSet;
}

string AllocateAddressesRequest::GetAddressType() const
{
    return m_addressType;
}

void AllocateAddressesRequest::SetAddressType(const string& _addressType)
{
    m_addressType = _addressType;
    m_addressTypeHasBeenSet = true;
}

bool AllocateAddressesRequest::AddressTypeHasBeenSet() const
{
    return m_addressTypeHasBeenSet;
}

string AllocateAddressesRequest::GetAnycastZone() const
{
    return m_anycastZone;
}

void AllocateAddressesRequest::SetAnycastZone(const string& _anycastZone)
{
    m_anycastZone = _anycastZone;
    m_anycastZoneHasBeenSet = true;
}

bool AllocateAddressesRequest::AnycastZoneHasBeenSet() const
{
    return m_anycastZoneHasBeenSet;
}

vector<string> AllocateAddressesRequest::GetVipCluster() const
{
    return m_vipCluster;
}

void AllocateAddressesRequest::SetVipCluster(const vector<string>& _vipCluster)
{
    m_vipCluster = _vipCluster;
    m_vipClusterHasBeenSet = true;
}

bool AllocateAddressesRequest::VipClusterHasBeenSet() const
{
    return m_vipClusterHasBeenSet;
}

bool AllocateAddressesRequest::GetApplicableForCLB() const
{
    return m_applicableForCLB;
}

void AllocateAddressesRequest::SetApplicableForCLB(const bool& _applicableForCLB)
{
    m_applicableForCLB = _applicableForCLB;
    m_applicableForCLBHasBeenSet = true;
}

bool AllocateAddressesRequest::ApplicableForCLBHasBeenSet() const
{
    return m_applicableForCLBHasBeenSet;
}

vector<Tag> AllocateAddressesRequest::GetTags() const
{
    return m_tags;
}

void AllocateAddressesRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool AllocateAddressesRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string AllocateAddressesRequest::GetBandwidthPackageId() const
{
    return m_bandwidthPackageId;
}

void AllocateAddressesRequest::SetBandwidthPackageId(const string& _bandwidthPackageId)
{
    m_bandwidthPackageId = _bandwidthPackageId;
    m_bandwidthPackageIdHasBeenSet = true;
}

bool AllocateAddressesRequest::BandwidthPackageIdHasBeenSet() const
{
    return m_bandwidthPackageIdHasBeenSet;
}

string AllocateAddressesRequest::GetAddressName() const
{
    return m_addressName;
}

void AllocateAddressesRequest::SetAddressName(const string& _addressName)
{
    m_addressName = _addressName;
    m_addressNameHasBeenSet = true;
}

bool AllocateAddressesRequest::AddressNameHasBeenSet() const
{
    return m_addressNameHasBeenSet;
}

string AllocateAddressesRequest::GetDedicatedClusterId() const
{
    return m_dedicatedClusterId;
}

void AllocateAddressesRequest::SetDedicatedClusterId(const string& _dedicatedClusterId)
{
    m_dedicatedClusterId = _dedicatedClusterId;
    m_dedicatedClusterIdHasBeenSet = true;
}

bool AllocateAddressesRequest::DedicatedClusterIdHasBeenSet() const
{
    return m_dedicatedClusterIdHasBeenSet;
}

bool AllocateAddressesRequest::GetIsDedicatedAddressPool() const
{
    return m_isDedicatedAddressPool;
}

void AllocateAddressesRequest::SetIsDedicatedAddressPool(const bool& _isDedicatedAddressPool)
{
    m_isDedicatedAddressPool = _isDedicatedAddressPool;
    m_isDedicatedAddressPoolHasBeenSet = true;
}

bool AllocateAddressesRequest::IsDedicatedAddressPoolHasBeenSet() const
{
    return m_isDedicatedAddressPoolHasBeenSet;
}

string AllocateAddressesRequest::GetEgress() const
{
    return m_egress;
}

void AllocateAddressesRequest::SetEgress(const string& _egress)
{
    m_egress = _egress;
    m_egressHasBeenSet = true;
}

bool AllocateAddressesRequest::EgressHasBeenSet() const
{
    return m_egressHasBeenSet;
}

string AllocateAddressesRequest::GetAntiDDoSPackageId() const
{
    return m_antiDDoSPackageId;
}

void AllocateAddressesRequest::SetAntiDDoSPackageId(const string& _antiDDoSPackageId)
{
    m_antiDDoSPackageId = _antiDDoSPackageId;
    m_antiDDoSPackageIdHasBeenSet = true;
}

bool AllocateAddressesRequest::AntiDDoSPackageIdHasBeenSet() const
{
    return m_antiDDoSPackageIdHasBeenSet;
}

string AllocateAddressesRequest::GetClientToken() const
{
    return m_clientToken;
}

void AllocateAddressesRequest::SetClientToken(const string& _clientToken)
{
    m_clientToken = _clientToken;
    m_clientTokenHasBeenSet = true;
}

bool AllocateAddressesRequest::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}



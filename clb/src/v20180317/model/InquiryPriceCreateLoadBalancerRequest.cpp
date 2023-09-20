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

#include <tencentcloud/clb/v20180317/model/InquiryPriceCreateLoadBalancerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

InquiryPriceCreateLoadBalancerRequest::InquiryPriceCreateLoadBalancerRequest() :
    m_loadBalancerTypeHasBeenSet(false),
    m_loadBalancerChargeTypeHasBeenSet(false),
    m_loadBalancerChargePrepaidHasBeenSet(false),
    m_internetAccessibleHasBeenSet(false),
    m_goodsNumHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_slaTypeHasBeenSet(false),
    m_addressIPVersionHasBeenSet(false),
    m_vipIspHasBeenSet(false)
{
}

string InquiryPriceCreateLoadBalancerRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_loadBalancerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loadBalancerType.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerChargeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loadBalancerChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerChargePrepaidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerChargePrepaid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_loadBalancerChargePrepaid.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_internetAccessibleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetAccessible";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_internetAccessible.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_goodsNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_goodsNum, allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_slaTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlaType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_slaType.c_str(), allocator).Move(), allocator);
    }

    if (m_addressIPVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressIPVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_addressIPVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_vipIspHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VipIsp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vipIsp.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string InquiryPriceCreateLoadBalancerRequest::GetLoadBalancerType() const
{
    return m_loadBalancerType;
}

void InquiryPriceCreateLoadBalancerRequest::SetLoadBalancerType(const string& _loadBalancerType)
{
    m_loadBalancerType = _loadBalancerType;
    m_loadBalancerTypeHasBeenSet = true;
}

bool InquiryPriceCreateLoadBalancerRequest::LoadBalancerTypeHasBeenSet() const
{
    return m_loadBalancerTypeHasBeenSet;
}

string InquiryPriceCreateLoadBalancerRequest::GetLoadBalancerChargeType() const
{
    return m_loadBalancerChargeType;
}

void InquiryPriceCreateLoadBalancerRequest::SetLoadBalancerChargeType(const string& _loadBalancerChargeType)
{
    m_loadBalancerChargeType = _loadBalancerChargeType;
    m_loadBalancerChargeTypeHasBeenSet = true;
}

bool InquiryPriceCreateLoadBalancerRequest::LoadBalancerChargeTypeHasBeenSet() const
{
    return m_loadBalancerChargeTypeHasBeenSet;
}

LBChargePrepaid InquiryPriceCreateLoadBalancerRequest::GetLoadBalancerChargePrepaid() const
{
    return m_loadBalancerChargePrepaid;
}

void InquiryPriceCreateLoadBalancerRequest::SetLoadBalancerChargePrepaid(const LBChargePrepaid& _loadBalancerChargePrepaid)
{
    m_loadBalancerChargePrepaid = _loadBalancerChargePrepaid;
    m_loadBalancerChargePrepaidHasBeenSet = true;
}

bool InquiryPriceCreateLoadBalancerRequest::LoadBalancerChargePrepaidHasBeenSet() const
{
    return m_loadBalancerChargePrepaidHasBeenSet;
}

InternetAccessible InquiryPriceCreateLoadBalancerRequest::GetInternetAccessible() const
{
    return m_internetAccessible;
}

void InquiryPriceCreateLoadBalancerRequest::SetInternetAccessible(const InternetAccessible& _internetAccessible)
{
    m_internetAccessible = _internetAccessible;
    m_internetAccessibleHasBeenSet = true;
}

bool InquiryPriceCreateLoadBalancerRequest::InternetAccessibleHasBeenSet() const
{
    return m_internetAccessibleHasBeenSet;
}

uint64_t InquiryPriceCreateLoadBalancerRequest::GetGoodsNum() const
{
    return m_goodsNum;
}

void InquiryPriceCreateLoadBalancerRequest::SetGoodsNum(const uint64_t& _goodsNum)
{
    m_goodsNum = _goodsNum;
    m_goodsNumHasBeenSet = true;
}

bool InquiryPriceCreateLoadBalancerRequest::GoodsNumHasBeenSet() const
{
    return m_goodsNumHasBeenSet;
}

string InquiryPriceCreateLoadBalancerRequest::GetZoneId() const
{
    return m_zoneId;
}

void InquiryPriceCreateLoadBalancerRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool InquiryPriceCreateLoadBalancerRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string InquiryPriceCreateLoadBalancerRequest::GetSlaType() const
{
    return m_slaType;
}

void InquiryPriceCreateLoadBalancerRequest::SetSlaType(const string& _slaType)
{
    m_slaType = _slaType;
    m_slaTypeHasBeenSet = true;
}

bool InquiryPriceCreateLoadBalancerRequest::SlaTypeHasBeenSet() const
{
    return m_slaTypeHasBeenSet;
}

string InquiryPriceCreateLoadBalancerRequest::GetAddressIPVersion() const
{
    return m_addressIPVersion;
}

void InquiryPriceCreateLoadBalancerRequest::SetAddressIPVersion(const string& _addressIPVersion)
{
    m_addressIPVersion = _addressIPVersion;
    m_addressIPVersionHasBeenSet = true;
}

bool InquiryPriceCreateLoadBalancerRequest::AddressIPVersionHasBeenSet() const
{
    return m_addressIPVersionHasBeenSet;
}

string InquiryPriceCreateLoadBalancerRequest::GetVipIsp() const
{
    return m_vipIsp;
}

void InquiryPriceCreateLoadBalancerRequest::SetVipIsp(const string& _vipIsp)
{
    m_vipIsp = _vipIsp;
    m_vipIspHasBeenSet = true;
}

bool InquiryPriceCreateLoadBalancerRequest::VipIspHasBeenSet() const
{
    return m_vipIspHasBeenSet;
}



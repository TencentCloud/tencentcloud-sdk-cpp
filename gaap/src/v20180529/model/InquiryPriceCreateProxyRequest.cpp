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

#include <tencentcloud/gaap/v20180529/model/InquiryPriceCreateProxyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gaap::V20180529::Model;
using namespace rapidjson;
using namespace std;

InquiryPriceCreateProxyRequest::InquiryPriceCreateProxyRequest() :
    m_accessRegionHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_destRegionHasBeenSet(false),
    m_concurrencyHasBeenSet(false),
    m_realServerRegionHasBeenSet(false),
    m_concurrentHasBeenSet(false),
    m_billingTypeHasBeenSet(false)
{
}

string InquiryPriceCreateProxyRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_accessRegionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AccessRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_accessRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_bandwidthHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Bandwidth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bandwidth, allocator);
    }

    if (m_destRegionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DestRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_destRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_concurrencyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Concurrency";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_concurrency, allocator);
    }

    if (m_realServerRegionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RealServerRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_realServerRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_concurrentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Concurrent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_concurrent, allocator);
    }

    if (m_billingTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BillingType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_billingType, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string InquiryPriceCreateProxyRequest::GetAccessRegion() const
{
    return m_accessRegion;
}

void InquiryPriceCreateProxyRequest::SetAccessRegion(const string& _accessRegion)
{
    m_accessRegion = _accessRegion;
    m_accessRegionHasBeenSet = true;
}

bool InquiryPriceCreateProxyRequest::AccessRegionHasBeenSet() const
{
    return m_accessRegionHasBeenSet;
}

int64_t InquiryPriceCreateProxyRequest::GetBandwidth() const
{
    return m_bandwidth;
}

void InquiryPriceCreateProxyRequest::SetBandwidth(const int64_t& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool InquiryPriceCreateProxyRequest::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

string InquiryPriceCreateProxyRequest::GetDestRegion() const
{
    return m_destRegion;
}

void InquiryPriceCreateProxyRequest::SetDestRegion(const string& _destRegion)
{
    m_destRegion = _destRegion;
    m_destRegionHasBeenSet = true;
}

bool InquiryPriceCreateProxyRequest::DestRegionHasBeenSet() const
{
    return m_destRegionHasBeenSet;
}

int64_t InquiryPriceCreateProxyRequest::GetConcurrency() const
{
    return m_concurrency;
}

void InquiryPriceCreateProxyRequest::SetConcurrency(const int64_t& _concurrency)
{
    m_concurrency = _concurrency;
    m_concurrencyHasBeenSet = true;
}

bool InquiryPriceCreateProxyRequest::ConcurrencyHasBeenSet() const
{
    return m_concurrencyHasBeenSet;
}

string InquiryPriceCreateProxyRequest::GetRealServerRegion() const
{
    return m_realServerRegion;
}

void InquiryPriceCreateProxyRequest::SetRealServerRegion(const string& _realServerRegion)
{
    m_realServerRegion = _realServerRegion;
    m_realServerRegionHasBeenSet = true;
}

bool InquiryPriceCreateProxyRequest::RealServerRegionHasBeenSet() const
{
    return m_realServerRegionHasBeenSet;
}

int64_t InquiryPriceCreateProxyRequest::GetConcurrent() const
{
    return m_concurrent;
}

void InquiryPriceCreateProxyRequest::SetConcurrent(const int64_t& _concurrent)
{
    m_concurrent = _concurrent;
    m_concurrentHasBeenSet = true;
}

bool InquiryPriceCreateProxyRequest::ConcurrentHasBeenSet() const
{
    return m_concurrentHasBeenSet;
}

int64_t InquiryPriceCreateProxyRequest::GetBillingType() const
{
    return m_billingType;
}

void InquiryPriceCreateProxyRequest::SetBillingType(const int64_t& _billingType)
{
    m_billingType = _billingType;
    m_billingTypeHasBeenSet = true;
}

bool InquiryPriceCreateProxyRequest::BillingTypeHasBeenSet() const
{
    return m_billingTypeHasBeenSet;
}



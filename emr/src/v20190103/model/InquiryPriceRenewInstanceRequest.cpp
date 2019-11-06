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

#include <tencentcloud/emr/v20190103/model/InquiryPriceRenewInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Emr::V20190103::Model;
using namespace rapidjson;
using namespace std;

InquiryPriceRenewInstanceRequest::InquiryPriceRenewInstanceRequest() :
    m_timeSpanHasBeenSet(false),
    m_resourceIdsHasBeenSet(false),
    m_placementHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_timeUnitHasBeenSet(false),
    m_currencyHasBeenSet(false)
{
}

string InquiryPriceRenewInstanceRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_timeSpanHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TimeSpan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeSpan, allocator);
    }

    if (m_resourceIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ResourceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_resourceIds.begin(); itr != m_resourceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_placementHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Placement";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_placement.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_payModeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_payMode, allocator);
    }

    if (m_timeUnitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TimeUnit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_timeUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_currencyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Currency";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_currency.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t InquiryPriceRenewInstanceRequest::GetTimeSpan() const
{
    return m_timeSpan;
}

void InquiryPriceRenewInstanceRequest::SetTimeSpan(const uint64_t& _timeSpan)
{
    m_timeSpan = _timeSpan;
    m_timeSpanHasBeenSet = true;
}

bool InquiryPriceRenewInstanceRequest::TimeSpanHasBeenSet() const
{
    return m_timeSpanHasBeenSet;
}

vector<string> InquiryPriceRenewInstanceRequest::GetResourceIds() const
{
    return m_resourceIds;
}

void InquiryPriceRenewInstanceRequest::SetResourceIds(const vector<string>& _resourceIds)
{
    m_resourceIds = _resourceIds;
    m_resourceIdsHasBeenSet = true;
}

bool InquiryPriceRenewInstanceRequest::ResourceIdsHasBeenSet() const
{
    return m_resourceIdsHasBeenSet;
}

Placement InquiryPriceRenewInstanceRequest::GetPlacement() const
{
    return m_placement;
}

void InquiryPriceRenewInstanceRequest::SetPlacement(const Placement& _placement)
{
    m_placement = _placement;
    m_placementHasBeenSet = true;
}

bool InquiryPriceRenewInstanceRequest::PlacementHasBeenSet() const
{
    return m_placementHasBeenSet;
}

int64_t InquiryPriceRenewInstanceRequest::GetPayMode() const
{
    return m_payMode;
}

void InquiryPriceRenewInstanceRequest::SetPayMode(const int64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool InquiryPriceRenewInstanceRequest::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string InquiryPriceRenewInstanceRequest::GetTimeUnit() const
{
    return m_timeUnit;
}

void InquiryPriceRenewInstanceRequest::SetTimeUnit(const string& _timeUnit)
{
    m_timeUnit = _timeUnit;
    m_timeUnitHasBeenSet = true;
}

bool InquiryPriceRenewInstanceRequest::TimeUnitHasBeenSet() const
{
    return m_timeUnitHasBeenSet;
}

string InquiryPriceRenewInstanceRequest::GetCurrency() const
{
    return m_currency;
}

void InquiryPriceRenewInstanceRequest::SetCurrency(const string& _currency)
{
    m_currency = _currency;
    m_currencyHasBeenSet = true;
}

bool InquiryPriceRenewInstanceRequest::CurrencyHasBeenSet() const
{
    return m_currencyHasBeenSet;
}



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

#include <tencentcloud/emr/v20190103/model/InquiryPriceUpdateInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Emr::V20190103::Model;
using namespace rapidjson;
using namespace std;

InquiryPriceUpdateInstanceRequest::InquiryPriceUpdateInstanceRequest() :
    m_timeUnitHasBeenSet(false),
    m_timeSpanHasBeenSet(false),
    m_updateSpecHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_placementHasBeenSet(false),
    m_currencyHasBeenSet(false)
{
}

string InquiryPriceUpdateInstanceRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_timeUnitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TimeUnit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_timeUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_timeSpanHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TimeSpan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeSpan, allocator);
    }

    if (m_updateSpecHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UpdateSpec";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_updateSpec.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_payModeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_payMode, allocator);
    }

    if (m_placementHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Placement";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_placement.ToJsonObject(d[key.c_str()], allocator);
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


string InquiryPriceUpdateInstanceRequest::GetTimeUnit() const
{
    return m_timeUnit;
}

void InquiryPriceUpdateInstanceRequest::SetTimeUnit(const string& _timeUnit)
{
    m_timeUnit = _timeUnit;
    m_timeUnitHasBeenSet = true;
}

bool InquiryPriceUpdateInstanceRequest::TimeUnitHasBeenSet() const
{
    return m_timeUnitHasBeenSet;
}

uint64_t InquiryPriceUpdateInstanceRequest::GetTimeSpan() const
{
    return m_timeSpan;
}

void InquiryPriceUpdateInstanceRequest::SetTimeSpan(const uint64_t& _timeSpan)
{
    m_timeSpan = _timeSpan;
    m_timeSpanHasBeenSet = true;
}

bool InquiryPriceUpdateInstanceRequest::TimeSpanHasBeenSet() const
{
    return m_timeSpanHasBeenSet;
}

UpdateInstanceSettings InquiryPriceUpdateInstanceRequest::GetUpdateSpec() const
{
    return m_updateSpec;
}

void InquiryPriceUpdateInstanceRequest::SetUpdateSpec(const UpdateInstanceSettings& _updateSpec)
{
    m_updateSpec = _updateSpec;
    m_updateSpecHasBeenSet = true;
}

bool InquiryPriceUpdateInstanceRequest::UpdateSpecHasBeenSet() const
{
    return m_updateSpecHasBeenSet;
}

uint64_t InquiryPriceUpdateInstanceRequest::GetPayMode() const
{
    return m_payMode;
}

void InquiryPriceUpdateInstanceRequest::SetPayMode(const uint64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool InquiryPriceUpdateInstanceRequest::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

Placement InquiryPriceUpdateInstanceRequest::GetPlacement() const
{
    return m_placement;
}

void InquiryPriceUpdateInstanceRequest::SetPlacement(const Placement& _placement)
{
    m_placement = _placement;
    m_placementHasBeenSet = true;
}

bool InquiryPriceUpdateInstanceRequest::PlacementHasBeenSet() const
{
    return m_placementHasBeenSet;
}

string InquiryPriceUpdateInstanceRequest::GetCurrency() const
{
    return m_currency;
}

void InquiryPriceUpdateInstanceRequest::SetCurrency(const string& _currency)
{
    m_currency = _currency;
    m_currencyHasBeenSet = true;
}

bool InquiryPriceUpdateInstanceRequest::CurrencyHasBeenSet() const
{
    return m_currencyHasBeenSet;
}



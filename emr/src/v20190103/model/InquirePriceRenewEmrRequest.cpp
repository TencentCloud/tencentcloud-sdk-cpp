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

#include <tencentcloud/emr/v20190103/model/InquirePriceRenewEmrRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

InquirePriceRenewEmrRequest::InquirePriceRenewEmrRequest() :
    m_timeSpanHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_placementHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_timeUnitHasBeenSet(false),
    m_currencyHasBeenSet(false)
{
}

string InquirePriceRenewEmrRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_timeSpanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeSpan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeSpan, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_placementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Placement";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_placement.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_payMode, allocator);
    }

    if (m_timeUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeUnit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timeUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_currencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Currency";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_currency.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t InquirePriceRenewEmrRequest::GetTimeSpan() const
{
    return m_timeSpan;
}

void InquirePriceRenewEmrRequest::SetTimeSpan(const uint64_t& _timeSpan)
{
    m_timeSpan = _timeSpan;
    m_timeSpanHasBeenSet = true;
}

bool InquirePriceRenewEmrRequest::TimeSpanHasBeenSet() const
{
    return m_timeSpanHasBeenSet;
}

string InquirePriceRenewEmrRequest::GetInstanceId() const
{
    return m_instanceId;
}

void InquirePriceRenewEmrRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InquirePriceRenewEmrRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

Placement InquirePriceRenewEmrRequest::GetPlacement() const
{
    return m_placement;
}

void InquirePriceRenewEmrRequest::SetPlacement(const Placement& _placement)
{
    m_placement = _placement;
    m_placementHasBeenSet = true;
}

bool InquirePriceRenewEmrRequest::PlacementHasBeenSet() const
{
    return m_placementHasBeenSet;
}

int64_t InquirePriceRenewEmrRequest::GetPayMode() const
{
    return m_payMode;
}

void InquirePriceRenewEmrRequest::SetPayMode(const int64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool InquirePriceRenewEmrRequest::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string InquirePriceRenewEmrRequest::GetTimeUnit() const
{
    return m_timeUnit;
}

void InquirePriceRenewEmrRequest::SetTimeUnit(const string& _timeUnit)
{
    m_timeUnit = _timeUnit;
    m_timeUnitHasBeenSet = true;
}

bool InquirePriceRenewEmrRequest::TimeUnitHasBeenSet() const
{
    return m_timeUnitHasBeenSet;
}

string InquirePriceRenewEmrRequest::GetCurrency() const
{
    return m_currency;
}

void InquirePriceRenewEmrRequest::SetCurrency(const string& _currency)
{
    m_currency = _currency;
    m_currencyHasBeenSet = true;
}

bool InquirePriceRenewEmrRequest::CurrencyHasBeenSet() const
{
    return m_currencyHasBeenSet;
}



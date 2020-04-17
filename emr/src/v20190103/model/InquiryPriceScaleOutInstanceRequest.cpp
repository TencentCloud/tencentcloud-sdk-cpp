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

#include <tencentcloud/emr/v20190103/model/InquiryPriceScaleOutInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Emr::V20190103::Model;
using namespace rapidjson;
using namespace std;

InquiryPriceScaleOutInstanceRequest::InquiryPriceScaleOutInstanceRequest() :
    m_timeUnitHasBeenSet(false),
    m_timeSpanHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_coreCountHasBeenSet(false),
    m_taskCountHasBeenSet(false),
    m_currencyHasBeenSet(false),
    m_routerCountHasBeenSet(false)
{
}

string InquiryPriceScaleOutInstanceRequest::ToJsonString() const
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

    if (m_zoneIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_zoneId, allocator);
    }

    if (m_payModeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_payMode, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_coreCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CoreCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_coreCount, allocator);
    }

    if (m_taskCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TaskCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskCount, allocator);
    }

    if (m_currencyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Currency";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_currency.c_str(), allocator).Move(), allocator);
    }

    if (m_routerCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RouterCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_routerCount, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string InquiryPriceScaleOutInstanceRequest::GetTimeUnit() const
{
    return m_timeUnit;
}

void InquiryPriceScaleOutInstanceRequest::SetTimeUnit(const string& _timeUnit)
{
    m_timeUnit = _timeUnit;
    m_timeUnitHasBeenSet = true;
}

bool InquiryPriceScaleOutInstanceRequest::TimeUnitHasBeenSet() const
{
    return m_timeUnitHasBeenSet;
}

uint64_t InquiryPriceScaleOutInstanceRequest::GetTimeSpan() const
{
    return m_timeSpan;
}

void InquiryPriceScaleOutInstanceRequest::SetTimeSpan(const uint64_t& _timeSpan)
{
    m_timeSpan = _timeSpan;
    m_timeSpanHasBeenSet = true;
}

bool InquiryPriceScaleOutInstanceRequest::TimeSpanHasBeenSet() const
{
    return m_timeSpanHasBeenSet;
}

uint64_t InquiryPriceScaleOutInstanceRequest::GetZoneId() const
{
    return m_zoneId;
}

void InquiryPriceScaleOutInstanceRequest::SetZoneId(const uint64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool InquiryPriceScaleOutInstanceRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

uint64_t InquiryPriceScaleOutInstanceRequest::GetPayMode() const
{
    return m_payMode;
}

void InquiryPriceScaleOutInstanceRequest::SetPayMode(const uint64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool InquiryPriceScaleOutInstanceRequest::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string InquiryPriceScaleOutInstanceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void InquiryPriceScaleOutInstanceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InquiryPriceScaleOutInstanceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

uint64_t InquiryPriceScaleOutInstanceRequest::GetCoreCount() const
{
    return m_coreCount;
}

void InquiryPriceScaleOutInstanceRequest::SetCoreCount(const uint64_t& _coreCount)
{
    m_coreCount = _coreCount;
    m_coreCountHasBeenSet = true;
}

bool InquiryPriceScaleOutInstanceRequest::CoreCountHasBeenSet() const
{
    return m_coreCountHasBeenSet;
}

uint64_t InquiryPriceScaleOutInstanceRequest::GetTaskCount() const
{
    return m_taskCount;
}

void InquiryPriceScaleOutInstanceRequest::SetTaskCount(const uint64_t& _taskCount)
{
    m_taskCount = _taskCount;
    m_taskCountHasBeenSet = true;
}

bool InquiryPriceScaleOutInstanceRequest::TaskCountHasBeenSet() const
{
    return m_taskCountHasBeenSet;
}

string InquiryPriceScaleOutInstanceRequest::GetCurrency() const
{
    return m_currency;
}

void InquiryPriceScaleOutInstanceRequest::SetCurrency(const string& _currency)
{
    m_currency = _currency;
    m_currencyHasBeenSet = true;
}

bool InquiryPriceScaleOutInstanceRequest::CurrencyHasBeenSet() const
{
    return m_currencyHasBeenSet;
}

uint64_t InquiryPriceScaleOutInstanceRequest::GetRouterCount() const
{
    return m_routerCount;
}

void InquiryPriceScaleOutInstanceRequest::SetRouterCount(const uint64_t& _routerCount)
{
    m_routerCount = _routerCount;
    m_routerCountHasBeenSet = true;
}

bool InquiryPriceScaleOutInstanceRequest::RouterCountHasBeenSet() const
{
    return m_routerCountHasBeenSet;
}



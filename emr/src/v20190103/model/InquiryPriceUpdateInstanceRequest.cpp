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
using namespace std;

InquiryPriceUpdateInstanceRequest::InquiryPriceUpdateInstanceRequest() :
    m_timeUnitHasBeenSet(false),
    m_timeSpanHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_updateSpecHasBeenSet(false),
    m_placementHasBeenSet(false),
    m_currencyHasBeenSet(false),
    m_resourceIdListHasBeenSet(false)
{
}

string InquiryPriceUpdateInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_timeUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeUnit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timeUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_timeSpanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeSpan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeSpan, allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_payMode, allocator);
    }

    if (m_updateSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateSpec";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_updateSpec.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_placementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Placement";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_placement.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_currencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Currency";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_currency.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_resourceIdList.begin(); itr != m_resourceIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
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

vector<string> InquiryPriceUpdateInstanceRequest::GetResourceIdList() const
{
    return m_resourceIdList;
}

void InquiryPriceUpdateInstanceRequest::SetResourceIdList(const vector<string>& _resourceIdList)
{
    m_resourceIdList = _resourceIdList;
    m_resourceIdListHasBeenSet = true;
}

bool InquiryPriceUpdateInstanceRequest::ResourceIdListHasBeenSet() const
{
    return m_resourceIdListHasBeenSet;
}



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
using namespace std;

InquiryPriceRenewInstanceRequest::InquiryPriceRenewInstanceRequest() :
    m_timeSpanHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_resourceIdsHasBeenSet(false),
    m_timeUnitHasBeenSet(false),
    m_currencyHasBeenSet(false),
    m_placementHasBeenSet(false),
    m_modifyPayModeHasBeenSet(false),
    m_needDetailHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
}

string InquiryPriceRenewInstanceRequest::ToJsonString() const
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

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_payMode, allocator);
    }

    if (m_resourceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_resourceIds.begin(); itr != m_resourceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_placementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Placement";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_placement.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_modifyPayModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyPayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_modifyPayMode, allocator);
    }

    if (m_needDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedDetail";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needDetail, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
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

int64_t InquiryPriceRenewInstanceRequest::GetModifyPayMode() const
{
    return m_modifyPayMode;
}

void InquiryPriceRenewInstanceRequest::SetModifyPayMode(const int64_t& _modifyPayMode)
{
    m_modifyPayMode = _modifyPayMode;
    m_modifyPayModeHasBeenSet = true;
}

bool InquiryPriceRenewInstanceRequest::ModifyPayModeHasBeenSet() const
{
    return m_modifyPayModeHasBeenSet;
}

bool InquiryPriceRenewInstanceRequest::GetNeedDetail() const
{
    return m_needDetail;
}

void InquiryPriceRenewInstanceRequest::SetNeedDetail(const bool& _needDetail)
{
    m_needDetail = _needDetail;
    m_needDetailHasBeenSet = true;
}

bool InquiryPriceRenewInstanceRequest::NeedDetailHasBeenSet() const
{
    return m_needDetailHasBeenSet;
}

string InquiryPriceRenewInstanceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void InquiryPriceRenewInstanceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InquiryPriceRenewInstanceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}



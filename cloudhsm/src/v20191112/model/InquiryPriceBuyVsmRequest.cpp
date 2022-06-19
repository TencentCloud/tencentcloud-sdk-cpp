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

#include <tencentcloud/cloudhsm/v20191112/model/InquiryPriceBuyVsmRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cloudhsm::V20191112::Model;
using namespace std;

InquiryPriceBuyVsmRequest::InquiryPriceBuyVsmRequest() :
    m_goodsNumHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_timeSpanHasBeenSet(false),
    m_timeUnitHasBeenSet(false),
    m_currencyHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_hsmTypeHasBeenSet(false)
{
}

string InquiryPriceBuyVsmRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_goodsNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_goodsNum, allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_payMode, allocator);
    }

    if (m_timeSpanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeSpan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timeSpan.c_str(), allocator).Move(), allocator);
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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_hsmTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HsmType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hsmType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t InquiryPriceBuyVsmRequest::GetGoodsNum() const
{
    return m_goodsNum;
}

void InquiryPriceBuyVsmRequest::SetGoodsNum(const int64_t& _goodsNum)
{
    m_goodsNum = _goodsNum;
    m_goodsNumHasBeenSet = true;
}

bool InquiryPriceBuyVsmRequest::GoodsNumHasBeenSet() const
{
    return m_goodsNumHasBeenSet;
}

int64_t InquiryPriceBuyVsmRequest::GetPayMode() const
{
    return m_payMode;
}

void InquiryPriceBuyVsmRequest::SetPayMode(const int64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool InquiryPriceBuyVsmRequest::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string InquiryPriceBuyVsmRequest::GetTimeSpan() const
{
    return m_timeSpan;
}

void InquiryPriceBuyVsmRequest::SetTimeSpan(const string& _timeSpan)
{
    m_timeSpan = _timeSpan;
    m_timeSpanHasBeenSet = true;
}

bool InquiryPriceBuyVsmRequest::TimeSpanHasBeenSet() const
{
    return m_timeSpanHasBeenSet;
}

string InquiryPriceBuyVsmRequest::GetTimeUnit() const
{
    return m_timeUnit;
}

void InquiryPriceBuyVsmRequest::SetTimeUnit(const string& _timeUnit)
{
    m_timeUnit = _timeUnit;
    m_timeUnitHasBeenSet = true;
}

bool InquiryPriceBuyVsmRequest::TimeUnitHasBeenSet() const
{
    return m_timeUnitHasBeenSet;
}

string InquiryPriceBuyVsmRequest::GetCurrency() const
{
    return m_currency;
}

void InquiryPriceBuyVsmRequest::SetCurrency(const string& _currency)
{
    m_currency = _currency;
    m_currencyHasBeenSet = true;
}

bool InquiryPriceBuyVsmRequest::CurrencyHasBeenSet() const
{
    return m_currencyHasBeenSet;
}

string InquiryPriceBuyVsmRequest::GetType() const
{
    return m_type;
}

void InquiryPriceBuyVsmRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool InquiryPriceBuyVsmRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string InquiryPriceBuyVsmRequest::GetHsmType() const
{
    return m_hsmType;
}

void InquiryPriceBuyVsmRequest::SetHsmType(const string& _hsmType)
{
    m_hsmType = _hsmType;
    m_hsmTypeHasBeenSet = true;
}

bool InquiryPriceBuyVsmRequest::HsmTypeHasBeenSet() const
{
    return m_hsmTypeHasBeenSet;
}



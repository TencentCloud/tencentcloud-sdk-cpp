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

#include <tencentcloud/cpdp/v20190820/model/ApplyTradeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

ApplyTradeRequest::ApplyTradeRequest() :
    m_tradeFileIdHasBeenSet(false),
    m_tradeOrderIdHasBeenSet(false),
    m_payerIdHasBeenSet(false),
    m_payeeNameHasBeenSet(false),
    m_payeeCountryCodeHasBeenSet(false),
    m_tradeTypeHasBeenSet(false),
    m_tradeTimeHasBeenSet(false),
    m_tradeCurrencyHasBeenSet(false),
    m_tradeAmountHasBeenSet(false),
    m_tradeNameHasBeenSet(false),
    m_tradeCountHasBeenSet(false),
    m_goodsCarrierHasBeenSet(false),
    m_serviceDetailHasBeenSet(false),
    m_serviceTimeHasBeenSet(false),
    m_profileHasBeenSet(false)
{
}

string ApplyTradeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_tradeFileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TradeFileId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tradeFileId.c_str(), allocator).Move(), allocator);
    }

    if (m_tradeOrderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TradeOrderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tradeOrderId.c_str(), allocator).Move(), allocator);
    }

    if (m_payerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payerId.c_str(), allocator).Move(), allocator);
    }

    if (m_payeeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayeeName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payeeName.c_str(), allocator).Move(), allocator);
    }

    if (m_payeeCountryCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayeeCountryCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payeeCountryCode.c_str(), allocator).Move(), allocator);
    }

    if (m_tradeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TradeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tradeType.c_str(), allocator).Move(), allocator);
    }

    if (m_tradeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TradeTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tradeTime.c_str(), allocator).Move(), allocator);
    }

    if (m_tradeCurrencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TradeCurrency";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tradeCurrency.c_str(), allocator).Move(), allocator);
    }

    if (m_tradeAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TradeAmount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tradeAmount, allocator);
    }

    if (m_tradeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TradeName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tradeName.c_str(), allocator).Move(), allocator);
    }

    if (m_tradeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TradeCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tradeCount, allocator);
    }

    if (m_goodsCarrierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsCarrier";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_goodsCarrier.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceDetail";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceDetail.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceTime.c_str(), allocator).Move(), allocator);
    }

    if (m_profileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Profile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_profile.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ApplyTradeRequest::GetTradeFileId() const
{
    return m_tradeFileId;
}

void ApplyTradeRequest::SetTradeFileId(const string& _tradeFileId)
{
    m_tradeFileId = _tradeFileId;
    m_tradeFileIdHasBeenSet = true;
}

bool ApplyTradeRequest::TradeFileIdHasBeenSet() const
{
    return m_tradeFileIdHasBeenSet;
}

string ApplyTradeRequest::GetTradeOrderId() const
{
    return m_tradeOrderId;
}

void ApplyTradeRequest::SetTradeOrderId(const string& _tradeOrderId)
{
    m_tradeOrderId = _tradeOrderId;
    m_tradeOrderIdHasBeenSet = true;
}

bool ApplyTradeRequest::TradeOrderIdHasBeenSet() const
{
    return m_tradeOrderIdHasBeenSet;
}

string ApplyTradeRequest::GetPayerId() const
{
    return m_payerId;
}

void ApplyTradeRequest::SetPayerId(const string& _payerId)
{
    m_payerId = _payerId;
    m_payerIdHasBeenSet = true;
}

bool ApplyTradeRequest::PayerIdHasBeenSet() const
{
    return m_payerIdHasBeenSet;
}

string ApplyTradeRequest::GetPayeeName() const
{
    return m_payeeName;
}

void ApplyTradeRequest::SetPayeeName(const string& _payeeName)
{
    m_payeeName = _payeeName;
    m_payeeNameHasBeenSet = true;
}

bool ApplyTradeRequest::PayeeNameHasBeenSet() const
{
    return m_payeeNameHasBeenSet;
}

string ApplyTradeRequest::GetPayeeCountryCode() const
{
    return m_payeeCountryCode;
}

void ApplyTradeRequest::SetPayeeCountryCode(const string& _payeeCountryCode)
{
    m_payeeCountryCode = _payeeCountryCode;
    m_payeeCountryCodeHasBeenSet = true;
}

bool ApplyTradeRequest::PayeeCountryCodeHasBeenSet() const
{
    return m_payeeCountryCodeHasBeenSet;
}

string ApplyTradeRequest::GetTradeType() const
{
    return m_tradeType;
}

void ApplyTradeRequest::SetTradeType(const string& _tradeType)
{
    m_tradeType = _tradeType;
    m_tradeTypeHasBeenSet = true;
}

bool ApplyTradeRequest::TradeTypeHasBeenSet() const
{
    return m_tradeTypeHasBeenSet;
}

string ApplyTradeRequest::GetTradeTime() const
{
    return m_tradeTime;
}

void ApplyTradeRequest::SetTradeTime(const string& _tradeTime)
{
    m_tradeTime = _tradeTime;
    m_tradeTimeHasBeenSet = true;
}

bool ApplyTradeRequest::TradeTimeHasBeenSet() const
{
    return m_tradeTimeHasBeenSet;
}

string ApplyTradeRequest::GetTradeCurrency() const
{
    return m_tradeCurrency;
}

void ApplyTradeRequest::SetTradeCurrency(const string& _tradeCurrency)
{
    m_tradeCurrency = _tradeCurrency;
    m_tradeCurrencyHasBeenSet = true;
}

bool ApplyTradeRequest::TradeCurrencyHasBeenSet() const
{
    return m_tradeCurrencyHasBeenSet;
}

double ApplyTradeRequest::GetTradeAmount() const
{
    return m_tradeAmount;
}

void ApplyTradeRequest::SetTradeAmount(const double& _tradeAmount)
{
    m_tradeAmount = _tradeAmount;
    m_tradeAmountHasBeenSet = true;
}

bool ApplyTradeRequest::TradeAmountHasBeenSet() const
{
    return m_tradeAmountHasBeenSet;
}

string ApplyTradeRequest::GetTradeName() const
{
    return m_tradeName;
}

void ApplyTradeRequest::SetTradeName(const string& _tradeName)
{
    m_tradeName = _tradeName;
    m_tradeNameHasBeenSet = true;
}

bool ApplyTradeRequest::TradeNameHasBeenSet() const
{
    return m_tradeNameHasBeenSet;
}

int64_t ApplyTradeRequest::GetTradeCount() const
{
    return m_tradeCount;
}

void ApplyTradeRequest::SetTradeCount(const int64_t& _tradeCount)
{
    m_tradeCount = _tradeCount;
    m_tradeCountHasBeenSet = true;
}

bool ApplyTradeRequest::TradeCountHasBeenSet() const
{
    return m_tradeCountHasBeenSet;
}

string ApplyTradeRequest::GetGoodsCarrier() const
{
    return m_goodsCarrier;
}

void ApplyTradeRequest::SetGoodsCarrier(const string& _goodsCarrier)
{
    m_goodsCarrier = _goodsCarrier;
    m_goodsCarrierHasBeenSet = true;
}

bool ApplyTradeRequest::GoodsCarrierHasBeenSet() const
{
    return m_goodsCarrierHasBeenSet;
}

string ApplyTradeRequest::GetServiceDetail() const
{
    return m_serviceDetail;
}

void ApplyTradeRequest::SetServiceDetail(const string& _serviceDetail)
{
    m_serviceDetail = _serviceDetail;
    m_serviceDetailHasBeenSet = true;
}

bool ApplyTradeRequest::ServiceDetailHasBeenSet() const
{
    return m_serviceDetailHasBeenSet;
}

string ApplyTradeRequest::GetServiceTime() const
{
    return m_serviceTime;
}

void ApplyTradeRequest::SetServiceTime(const string& _serviceTime)
{
    m_serviceTime = _serviceTime;
    m_serviceTimeHasBeenSet = true;
}

bool ApplyTradeRequest::ServiceTimeHasBeenSet() const
{
    return m_serviceTimeHasBeenSet;
}

string ApplyTradeRequest::GetProfile() const
{
    return m_profile;
}

void ApplyTradeRequest::SetProfile(const string& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool ApplyTradeRequest::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}



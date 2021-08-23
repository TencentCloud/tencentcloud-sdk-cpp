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

#include <tencentcloud/cpdp/v20190820/model/ApplyTradeData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

ApplyTradeData::ApplyTradeData() :
    m_merchantIdHasBeenSet(false),
    m_tradeFileIdHasBeenSet(false),
    m_tradeCurrencyHasBeenSet(false),
    m_tradeAmountHasBeenSet(false),
    m_payerIdHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome ApplyTradeData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MerchantId") && !value["MerchantId"].IsNull())
    {
        if (!value["MerchantId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplyTradeData.MerchantId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_merchantId = string(value["MerchantId"].GetString());
        m_merchantIdHasBeenSet = true;
    }

    if (value.HasMember("TradeFileId") && !value["TradeFileId"].IsNull())
    {
        if (!value["TradeFileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplyTradeData.TradeFileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tradeFileId = string(value["TradeFileId"].GetString());
        m_tradeFileIdHasBeenSet = true;
    }

    if (value.HasMember("TradeCurrency") && !value["TradeCurrency"].IsNull())
    {
        if (!value["TradeCurrency"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplyTradeData.TradeCurrency` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tradeCurrency = string(value["TradeCurrency"].GetString());
        m_tradeCurrencyHasBeenSet = true;
    }

    if (value.HasMember("TradeAmount") && !value["TradeAmount"].IsNull())
    {
        if (!value["TradeAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplyTradeData.TradeAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tradeAmount = string(value["TradeAmount"].GetString());
        m_tradeAmountHasBeenSet = true;
    }

    if (value.HasMember("PayerId") && !value["PayerId"].IsNull())
    {
        if (!value["PayerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplyTradeData.PayerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payerId = string(value["PayerId"].GetString());
        m_payerIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplyTradeData.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApplyTradeData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_merchantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_merchantId.c_str(), allocator).Move(), allocator);
    }

    if (m_tradeFileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TradeFileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tradeFileId.c_str(), allocator).Move(), allocator);
    }

    if (m_tradeCurrencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TradeCurrency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tradeCurrency.c_str(), allocator).Move(), allocator);
    }

    if (m_tradeAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TradeAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tradeAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_payerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payerId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

}


string ApplyTradeData::GetMerchantId() const
{
    return m_merchantId;
}

void ApplyTradeData::SetMerchantId(const string& _merchantId)
{
    m_merchantId = _merchantId;
    m_merchantIdHasBeenSet = true;
}

bool ApplyTradeData::MerchantIdHasBeenSet() const
{
    return m_merchantIdHasBeenSet;
}

string ApplyTradeData::GetTradeFileId() const
{
    return m_tradeFileId;
}

void ApplyTradeData::SetTradeFileId(const string& _tradeFileId)
{
    m_tradeFileId = _tradeFileId;
    m_tradeFileIdHasBeenSet = true;
}

bool ApplyTradeData::TradeFileIdHasBeenSet() const
{
    return m_tradeFileIdHasBeenSet;
}

string ApplyTradeData::GetTradeCurrency() const
{
    return m_tradeCurrency;
}

void ApplyTradeData::SetTradeCurrency(const string& _tradeCurrency)
{
    m_tradeCurrency = _tradeCurrency;
    m_tradeCurrencyHasBeenSet = true;
}

bool ApplyTradeData::TradeCurrencyHasBeenSet() const
{
    return m_tradeCurrencyHasBeenSet;
}

string ApplyTradeData::GetTradeAmount() const
{
    return m_tradeAmount;
}

void ApplyTradeData::SetTradeAmount(const string& _tradeAmount)
{
    m_tradeAmount = _tradeAmount;
    m_tradeAmountHasBeenSet = true;
}

bool ApplyTradeData::TradeAmountHasBeenSet() const
{
    return m_tradeAmountHasBeenSet;
}

string ApplyTradeData::GetPayerId() const
{
    return m_payerId;
}

void ApplyTradeData::SetPayerId(const string& _payerId)
{
    m_payerId = _payerId;
    m_payerIdHasBeenSet = true;
}

bool ApplyTradeData::PayerIdHasBeenSet() const
{
    return m_payerIdHasBeenSet;
}

string ApplyTradeData::GetStatus() const
{
    return m_status;
}

void ApplyTradeData::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ApplyTradeData::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}


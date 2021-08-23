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

#include <tencentcloud/cpdp/v20190820/model/QueryTradeData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryTradeData::QueryTradeData() :
    m_merchantIdHasBeenSet(false),
    m_tradeFileIdHasBeenSet(false),
    m_tradeOrderIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_failReasonHasBeenSet(false),
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
    m_serviceTimeHasBeenSet(false)
{
}

CoreInternalOutcome QueryTradeData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MerchantId") && !value["MerchantId"].IsNull())
    {
        if (!value["MerchantId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryTradeData.MerchantId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_merchantId = string(value["MerchantId"].GetString());
        m_merchantIdHasBeenSet = true;
    }

    if (value.HasMember("TradeFileId") && !value["TradeFileId"].IsNull())
    {
        if (!value["TradeFileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryTradeData.TradeFileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tradeFileId = string(value["TradeFileId"].GetString());
        m_tradeFileIdHasBeenSet = true;
    }

    if (value.HasMember("TradeOrderId") && !value["TradeOrderId"].IsNull())
    {
        if (!value["TradeOrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryTradeData.TradeOrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tradeOrderId = string(value["TradeOrderId"].GetString());
        m_tradeOrderIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryTradeData.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("FailReason") && !value["FailReason"].IsNull())
    {
        if (!value["FailReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryTradeData.FailReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failReason = string(value["FailReason"].GetString());
        m_failReasonHasBeenSet = true;
    }

    if (value.HasMember("PayerId") && !value["PayerId"].IsNull())
    {
        if (!value["PayerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryTradeData.PayerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payerId = string(value["PayerId"].GetString());
        m_payerIdHasBeenSet = true;
    }

    if (value.HasMember("PayeeName") && !value["PayeeName"].IsNull())
    {
        if (!value["PayeeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryTradeData.PayeeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payeeName = string(value["PayeeName"].GetString());
        m_payeeNameHasBeenSet = true;
    }

    if (value.HasMember("PayeeCountryCode") && !value["PayeeCountryCode"].IsNull())
    {
        if (!value["PayeeCountryCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryTradeData.PayeeCountryCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payeeCountryCode = string(value["PayeeCountryCode"].GetString());
        m_payeeCountryCodeHasBeenSet = true;
    }

    if (value.HasMember("TradeType") && !value["TradeType"].IsNull())
    {
        if (!value["TradeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryTradeData.TradeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tradeType = string(value["TradeType"].GetString());
        m_tradeTypeHasBeenSet = true;
    }

    if (value.HasMember("TradeTime") && !value["TradeTime"].IsNull())
    {
        if (!value["TradeTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryTradeData.TradeTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tradeTime = string(value["TradeTime"].GetString());
        m_tradeTimeHasBeenSet = true;
    }

    if (value.HasMember("TradeCurrency") && !value["TradeCurrency"].IsNull())
    {
        if (!value["TradeCurrency"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryTradeData.TradeCurrency` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tradeCurrency = string(value["TradeCurrency"].GetString());
        m_tradeCurrencyHasBeenSet = true;
    }

    if (value.HasMember("TradeAmount") && !value["TradeAmount"].IsNull())
    {
        if (!value["TradeAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryTradeData.TradeAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tradeAmount = string(value["TradeAmount"].GetString());
        m_tradeAmountHasBeenSet = true;
    }

    if (value.HasMember("TradeName") && !value["TradeName"].IsNull())
    {
        if (!value["TradeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryTradeData.TradeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tradeName = string(value["TradeName"].GetString());
        m_tradeNameHasBeenSet = true;
    }

    if (value.HasMember("TradeCount") && !value["TradeCount"].IsNull())
    {
        if (!value["TradeCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QueryTradeData.TradeCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tradeCount = value["TradeCount"].GetInt64();
        m_tradeCountHasBeenSet = true;
    }

    if (value.HasMember("GoodsCarrier") && !value["GoodsCarrier"].IsNull())
    {
        if (!value["GoodsCarrier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryTradeData.GoodsCarrier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_goodsCarrier = string(value["GoodsCarrier"].GetString());
        m_goodsCarrierHasBeenSet = true;
    }

    if (value.HasMember("ServiceDetail") && !value["ServiceDetail"].IsNull())
    {
        if (!value["ServiceDetail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryTradeData.ServiceDetail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceDetail = string(value["ServiceDetail"].GetString());
        m_serviceDetailHasBeenSet = true;
    }

    if (value.HasMember("ServiceTime") && !value["ServiceTime"].IsNull())
    {
        if (!value["ServiceTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryTradeData.ServiceTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceTime = string(value["ServiceTime"].GetString());
        m_serviceTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryTradeData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_tradeOrderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TradeOrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tradeOrderId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_failReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failReason.c_str(), allocator).Move(), allocator);
    }

    if (m_payerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payerId.c_str(), allocator).Move(), allocator);
    }

    if (m_payeeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayeeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payeeName.c_str(), allocator).Move(), allocator);
    }

    if (m_payeeCountryCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayeeCountryCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payeeCountryCode.c_str(), allocator).Move(), allocator);
    }

    if (m_tradeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TradeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tradeType.c_str(), allocator).Move(), allocator);
    }

    if (m_tradeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TradeTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tradeTime.c_str(), allocator).Move(), allocator);
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

    if (m_tradeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TradeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tradeName.c_str(), allocator).Move(), allocator);
    }

    if (m_tradeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TradeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tradeCount, allocator);
    }

    if (m_goodsCarrierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsCarrier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_goodsCarrier.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceDetail.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceTime.c_str(), allocator).Move(), allocator);
    }

}


string QueryTradeData::GetMerchantId() const
{
    return m_merchantId;
}

void QueryTradeData::SetMerchantId(const string& _merchantId)
{
    m_merchantId = _merchantId;
    m_merchantIdHasBeenSet = true;
}

bool QueryTradeData::MerchantIdHasBeenSet() const
{
    return m_merchantIdHasBeenSet;
}

string QueryTradeData::GetTradeFileId() const
{
    return m_tradeFileId;
}

void QueryTradeData::SetTradeFileId(const string& _tradeFileId)
{
    m_tradeFileId = _tradeFileId;
    m_tradeFileIdHasBeenSet = true;
}

bool QueryTradeData::TradeFileIdHasBeenSet() const
{
    return m_tradeFileIdHasBeenSet;
}

string QueryTradeData::GetTradeOrderId() const
{
    return m_tradeOrderId;
}

void QueryTradeData::SetTradeOrderId(const string& _tradeOrderId)
{
    m_tradeOrderId = _tradeOrderId;
    m_tradeOrderIdHasBeenSet = true;
}

bool QueryTradeData::TradeOrderIdHasBeenSet() const
{
    return m_tradeOrderIdHasBeenSet;
}

string QueryTradeData::GetStatus() const
{
    return m_status;
}

void QueryTradeData::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool QueryTradeData::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string QueryTradeData::GetFailReason() const
{
    return m_failReason;
}

void QueryTradeData::SetFailReason(const string& _failReason)
{
    m_failReason = _failReason;
    m_failReasonHasBeenSet = true;
}

bool QueryTradeData::FailReasonHasBeenSet() const
{
    return m_failReasonHasBeenSet;
}

string QueryTradeData::GetPayerId() const
{
    return m_payerId;
}

void QueryTradeData::SetPayerId(const string& _payerId)
{
    m_payerId = _payerId;
    m_payerIdHasBeenSet = true;
}

bool QueryTradeData::PayerIdHasBeenSet() const
{
    return m_payerIdHasBeenSet;
}

string QueryTradeData::GetPayeeName() const
{
    return m_payeeName;
}

void QueryTradeData::SetPayeeName(const string& _payeeName)
{
    m_payeeName = _payeeName;
    m_payeeNameHasBeenSet = true;
}

bool QueryTradeData::PayeeNameHasBeenSet() const
{
    return m_payeeNameHasBeenSet;
}

string QueryTradeData::GetPayeeCountryCode() const
{
    return m_payeeCountryCode;
}

void QueryTradeData::SetPayeeCountryCode(const string& _payeeCountryCode)
{
    m_payeeCountryCode = _payeeCountryCode;
    m_payeeCountryCodeHasBeenSet = true;
}

bool QueryTradeData::PayeeCountryCodeHasBeenSet() const
{
    return m_payeeCountryCodeHasBeenSet;
}

string QueryTradeData::GetTradeType() const
{
    return m_tradeType;
}

void QueryTradeData::SetTradeType(const string& _tradeType)
{
    m_tradeType = _tradeType;
    m_tradeTypeHasBeenSet = true;
}

bool QueryTradeData::TradeTypeHasBeenSet() const
{
    return m_tradeTypeHasBeenSet;
}

string QueryTradeData::GetTradeTime() const
{
    return m_tradeTime;
}

void QueryTradeData::SetTradeTime(const string& _tradeTime)
{
    m_tradeTime = _tradeTime;
    m_tradeTimeHasBeenSet = true;
}

bool QueryTradeData::TradeTimeHasBeenSet() const
{
    return m_tradeTimeHasBeenSet;
}

string QueryTradeData::GetTradeCurrency() const
{
    return m_tradeCurrency;
}

void QueryTradeData::SetTradeCurrency(const string& _tradeCurrency)
{
    m_tradeCurrency = _tradeCurrency;
    m_tradeCurrencyHasBeenSet = true;
}

bool QueryTradeData::TradeCurrencyHasBeenSet() const
{
    return m_tradeCurrencyHasBeenSet;
}

string QueryTradeData::GetTradeAmount() const
{
    return m_tradeAmount;
}

void QueryTradeData::SetTradeAmount(const string& _tradeAmount)
{
    m_tradeAmount = _tradeAmount;
    m_tradeAmountHasBeenSet = true;
}

bool QueryTradeData::TradeAmountHasBeenSet() const
{
    return m_tradeAmountHasBeenSet;
}

string QueryTradeData::GetTradeName() const
{
    return m_tradeName;
}

void QueryTradeData::SetTradeName(const string& _tradeName)
{
    m_tradeName = _tradeName;
    m_tradeNameHasBeenSet = true;
}

bool QueryTradeData::TradeNameHasBeenSet() const
{
    return m_tradeNameHasBeenSet;
}

int64_t QueryTradeData::GetTradeCount() const
{
    return m_tradeCount;
}

void QueryTradeData::SetTradeCount(const int64_t& _tradeCount)
{
    m_tradeCount = _tradeCount;
    m_tradeCountHasBeenSet = true;
}

bool QueryTradeData::TradeCountHasBeenSet() const
{
    return m_tradeCountHasBeenSet;
}

string QueryTradeData::GetGoodsCarrier() const
{
    return m_goodsCarrier;
}

void QueryTradeData::SetGoodsCarrier(const string& _goodsCarrier)
{
    m_goodsCarrier = _goodsCarrier;
    m_goodsCarrierHasBeenSet = true;
}

bool QueryTradeData::GoodsCarrierHasBeenSet() const
{
    return m_goodsCarrierHasBeenSet;
}

string QueryTradeData::GetServiceDetail() const
{
    return m_serviceDetail;
}

void QueryTradeData::SetServiceDetail(const string& _serviceDetail)
{
    m_serviceDetail = _serviceDetail;
    m_serviceDetailHasBeenSet = true;
}

bool QueryTradeData::ServiceDetailHasBeenSet() const
{
    return m_serviceDetailHasBeenSet;
}

string QueryTradeData::GetServiceTime() const
{
    return m_serviceTime;
}

void QueryTradeData::SetServiceTime(const string& _serviceTime)
{
    m_serviceTime = _serviceTime;
    m_serviceTimeHasBeenSet = true;
}

bool QueryTradeData::ServiceTimeHasBeenSet() const
{
    return m_serviceTimeHasBeenSet;
}


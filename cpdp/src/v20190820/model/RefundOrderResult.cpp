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

#include <tencentcloud/cpdp/v20190820/model/RefundOrderResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

RefundOrderResult::RefundOrderResult() :
    m_orderNoHasBeenSet(false),
    m_developerNoHasBeenSet(false),
    m_tradeDiscountAmountHasBeenSet(false),
    m_payNameHasBeenSet(false),
    m_orderMerchantIdHasBeenSet(false),
    m_tradeAmountHasBeenSet(false),
    m_currencySignHasBeenSet(false),
    m_tradePayTimeHasBeenSet(false),
    m_shopOrderIdHasBeenSet(false),
    m_payTagHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_orderCurrencyHasBeenSet(false),
    m_tradeTimeHasBeenSet(false),
    m_discountAmountHasBeenSet(false),
    m_originalOrderNoHasBeenSet(false)
{
}

CoreInternalOutcome RefundOrderResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OrderNo") && !value["OrderNo"].IsNull())
    {
        if (!value["OrderNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RefundOrderResult.OrderNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderNo = string(value["OrderNo"].GetString());
        m_orderNoHasBeenSet = true;
    }

    if (value.HasMember("DeveloperNo") && !value["DeveloperNo"].IsNull())
    {
        if (!value["DeveloperNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RefundOrderResult.DeveloperNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_developerNo = string(value["DeveloperNo"].GetString());
        m_developerNoHasBeenSet = true;
    }

    if (value.HasMember("TradeDiscountAmount") && !value["TradeDiscountAmount"].IsNull())
    {
        if (!value["TradeDiscountAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RefundOrderResult.TradeDiscountAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tradeDiscountAmount = string(value["TradeDiscountAmount"].GetString());
        m_tradeDiscountAmountHasBeenSet = true;
    }

    if (value.HasMember("PayName") && !value["PayName"].IsNull())
    {
        if (!value["PayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RefundOrderResult.PayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payName = string(value["PayName"].GetString());
        m_payNameHasBeenSet = true;
    }

    if (value.HasMember("OrderMerchantId") && !value["OrderMerchantId"].IsNull())
    {
        if (!value["OrderMerchantId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RefundOrderResult.OrderMerchantId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderMerchantId = string(value["OrderMerchantId"].GetString());
        m_orderMerchantIdHasBeenSet = true;
    }

    if (value.HasMember("TradeAmount") && !value["TradeAmount"].IsNull())
    {
        if (!value["TradeAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RefundOrderResult.TradeAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tradeAmount = string(value["TradeAmount"].GetString());
        m_tradeAmountHasBeenSet = true;
    }

    if (value.HasMember("CurrencySign") && !value["CurrencySign"].IsNull())
    {
        if (!value["CurrencySign"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RefundOrderResult.CurrencySign` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currencySign = string(value["CurrencySign"].GetString());
        m_currencySignHasBeenSet = true;
    }

    if (value.HasMember("TradePayTime") && !value["TradePayTime"].IsNull())
    {
        if (!value["TradePayTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RefundOrderResult.TradePayTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tradePayTime = string(value["TradePayTime"].GetString());
        m_tradePayTimeHasBeenSet = true;
    }

    if (value.HasMember("ShopOrderId") && !value["ShopOrderId"].IsNull())
    {
        if (!value["ShopOrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RefundOrderResult.ShopOrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shopOrderId = string(value["ShopOrderId"].GetString());
        m_shopOrderIdHasBeenSet = true;
    }

    if (value.HasMember("PayTag") && !value["PayTag"].IsNull())
    {
        if (!value["PayTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RefundOrderResult.PayTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payTag = string(value["PayTag"].GetString());
        m_payTagHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RefundOrderResult.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("OrderCurrency") && !value["OrderCurrency"].IsNull())
    {
        if (!value["OrderCurrency"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RefundOrderResult.OrderCurrency` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderCurrency = string(value["OrderCurrency"].GetString());
        m_orderCurrencyHasBeenSet = true;
    }

    if (value.HasMember("TradeTime") && !value["TradeTime"].IsNull())
    {
        if (!value["TradeTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RefundOrderResult.TradeTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tradeTime = string(value["TradeTime"].GetString());
        m_tradeTimeHasBeenSet = true;
    }

    if (value.HasMember("DiscountAmount") && !value["DiscountAmount"].IsNull())
    {
        if (!value["DiscountAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RefundOrderResult.DiscountAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_discountAmount = string(value["DiscountAmount"].GetString());
        m_discountAmountHasBeenSet = true;
    }

    if (value.HasMember("OriginalOrderNo") && !value["OriginalOrderNo"].IsNull())
    {
        if (!value["OriginalOrderNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RefundOrderResult.OriginalOrderNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originalOrderNo = string(value["OriginalOrderNo"].GetString());
        m_originalOrderNoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RefundOrderResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_orderNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderNo.c_str(), allocator).Move(), allocator);
    }

    if (m_developerNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeveloperNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_developerNo.c_str(), allocator).Move(), allocator);
    }

    if (m_tradeDiscountAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TradeDiscountAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tradeDiscountAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_payNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payName.c_str(), allocator).Move(), allocator);
    }

    if (m_orderMerchantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderMerchantId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderMerchantId.c_str(), allocator).Move(), allocator);
    }

    if (m_tradeAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TradeAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tradeAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_currencySignHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrencySign";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currencySign.c_str(), allocator).Move(), allocator);
    }

    if (m_tradePayTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TradePayTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tradePayTime.c_str(), allocator).Move(), allocator);
    }

    if (m_shopOrderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShopOrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shopOrderId.c_str(), allocator).Move(), allocator);
    }

    if (m_payTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payTag.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_orderCurrencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderCurrency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderCurrency.c_str(), allocator).Move(), allocator);
    }

    if (m_tradeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TradeTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tradeTime.c_str(), allocator).Move(), allocator);
    }

    if (m_discountAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiscountAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_discountAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_originalOrderNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalOrderNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originalOrderNo.c_str(), allocator).Move(), allocator);
    }

}


string RefundOrderResult::GetOrderNo() const
{
    return m_orderNo;
}

void RefundOrderResult::SetOrderNo(const string& _orderNo)
{
    m_orderNo = _orderNo;
    m_orderNoHasBeenSet = true;
}

bool RefundOrderResult::OrderNoHasBeenSet() const
{
    return m_orderNoHasBeenSet;
}

string RefundOrderResult::GetDeveloperNo() const
{
    return m_developerNo;
}

void RefundOrderResult::SetDeveloperNo(const string& _developerNo)
{
    m_developerNo = _developerNo;
    m_developerNoHasBeenSet = true;
}

bool RefundOrderResult::DeveloperNoHasBeenSet() const
{
    return m_developerNoHasBeenSet;
}

string RefundOrderResult::GetTradeDiscountAmount() const
{
    return m_tradeDiscountAmount;
}

void RefundOrderResult::SetTradeDiscountAmount(const string& _tradeDiscountAmount)
{
    m_tradeDiscountAmount = _tradeDiscountAmount;
    m_tradeDiscountAmountHasBeenSet = true;
}

bool RefundOrderResult::TradeDiscountAmountHasBeenSet() const
{
    return m_tradeDiscountAmountHasBeenSet;
}

string RefundOrderResult::GetPayName() const
{
    return m_payName;
}

void RefundOrderResult::SetPayName(const string& _payName)
{
    m_payName = _payName;
    m_payNameHasBeenSet = true;
}

bool RefundOrderResult::PayNameHasBeenSet() const
{
    return m_payNameHasBeenSet;
}

string RefundOrderResult::GetOrderMerchantId() const
{
    return m_orderMerchantId;
}

void RefundOrderResult::SetOrderMerchantId(const string& _orderMerchantId)
{
    m_orderMerchantId = _orderMerchantId;
    m_orderMerchantIdHasBeenSet = true;
}

bool RefundOrderResult::OrderMerchantIdHasBeenSet() const
{
    return m_orderMerchantIdHasBeenSet;
}

string RefundOrderResult::GetTradeAmount() const
{
    return m_tradeAmount;
}

void RefundOrderResult::SetTradeAmount(const string& _tradeAmount)
{
    m_tradeAmount = _tradeAmount;
    m_tradeAmountHasBeenSet = true;
}

bool RefundOrderResult::TradeAmountHasBeenSet() const
{
    return m_tradeAmountHasBeenSet;
}

string RefundOrderResult::GetCurrencySign() const
{
    return m_currencySign;
}

void RefundOrderResult::SetCurrencySign(const string& _currencySign)
{
    m_currencySign = _currencySign;
    m_currencySignHasBeenSet = true;
}

bool RefundOrderResult::CurrencySignHasBeenSet() const
{
    return m_currencySignHasBeenSet;
}

string RefundOrderResult::GetTradePayTime() const
{
    return m_tradePayTime;
}

void RefundOrderResult::SetTradePayTime(const string& _tradePayTime)
{
    m_tradePayTime = _tradePayTime;
    m_tradePayTimeHasBeenSet = true;
}

bool RefundOrderResult::TradePayTimeHasBeenSet() const
{
    return m_tradePayTimeHasBeenSet;
}

string RefundOrderResult::GetShopOrderId() const
{
    return m_shopOrderId;
}

void RefundOrderResult::SetShopOrderId(const string& _shopOrderId)
{
    m_shopOrderId = _shopOrderId;
    m_shopOrderIdHasBeenSet = true;
}

bool RefundOrderResult::ShopOrderIdHasBeenSet() const
{
    return m_shopOrderIdHasBeenSet;
}

string RefundOrderResult::GetPayTag() const
{
    return m_payTag;
}

void RefundOrderResult::SetPayTag(const string& _payTag)
{
    m_payTag = _payTag;
    m_payTagHasBeenSet = true;
}

bool RefundOrderResult::PayTagHasBeenSet() const
{
    return m_payTagHasBeenSet;
}

string RefundOrderResult::GetStatus() const
{
    return m_status;
}

void RefundOrderResult::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RefundOrderResult::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string RefundOrderResult::GetOrderCurrency() const
{
    return m_orderCurrency;
}

void RefundOrderResult::SetOrderCurrency(const string& _orderCurrency)
{
    m_orderCurrency = _orderCurrency;
    m_orderCurrencyHasBeenSet = true;
}

bool RefundOrderResult::OrderCurrencyHasBeenSet() const
{
    return m_orderCurrencyHasBeenSet;
}

string RefundOrderResult::GetTradeTime() const
{
    return m_tradeTime;
}

void RefundOrderResult::SetTradeTime(const string& _tradeTime)
{
    m_tradeTime = _tradeTime;
    m_tradeTimeHasBeenSet = true;
}

bool RefundOrderResult::TradeTimeHasBeenSet() const
{
    return m_tradeTimeHasBeenSet;
}

string RefundOrderResult::GetDiscountAmount() const
{
    return m_discountAmount;
}

void RefundOrderResult::SetDiscountAmount(const string& _discountAmount)
{
    m_discountAmount = _discountAmount;
    m_discountAmountHasBeenSet = true;
}

bool RefundOrderResult::DiscountAmountHasBeenSet() const
{
    return m_discountAmountHasBeenSet;
}

string RefundOrderResult::GetOriginalOrderNo() const
{
    return m_originalOrderNo;
}

void RefundOrderResult::SetOriginalOrderNo(const string& _originalOrderNo)
{
    m_originalOrderNo = _originalOrderNo;
    m_originalOrderNoHasBeenSet = true;
}

bool RefundOrderResult::OriginalOrderNoHasBeenSet() const
{
    return m_originalOrderNoHasBeenSet;
}


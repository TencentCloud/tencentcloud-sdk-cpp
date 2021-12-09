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

#include <tencentcloud/cpdp/v20190820/model/PayOrderResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

PayOrderResult::PayOrderResult() :
    m_orderNoHasBeenSet(false),
    m_developerNoHasBeenSet(false),
    m_tradeDiscountAmountHasBeenSet(false),
    m_payNameHasBeenSet(false),
    m_orderMerchantIdHasBeenSet(false),
    m_tradeAccountHasBeenSet(false),
    m_tradeAmountHasBeenSet(false),
    m_currencySignHasBeenSet(false),
    m_tradePayTimeHasBeenSet(false),
    m_shopOrderIdHasBeenSet(false),
    m_payTagHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_orderCurrencyHasBeenSet(false),
    m_tradeQrcodeHasBeenSet(false),
    m_wechatAppIdHasBeenSet(false),
    m_wechatTimeStampHasBeenSet(false),
    m_wechatNonceStrHasBeenSet(false),
    m_wechatSignTypeHasBeenSet(false),
    m_wechatPackageHasBeenSet(false),
    m_wechatPaySignHasBeenSet(false)
{
}

CoreInternalOutcome PayOrderResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OrderNo") && !value["OrderNo"].IsNull())
    {
        if (!value["OrderNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayOrderResult.OrderNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderNo = string(value["OrderNo"].GetString());
        m_orderNoHasBeenSet = true;
    }

    if (value.HasMember("DeveloperNo") && !value["DeveloperNo"].IsNull())
    {
        if (!value["DeveloperNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayOrderResult.DeveloperNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_developerNo = string(value["DeveloperNo"].GetString());
        m_developerNoHasBeenSet = true;
    }

    if (value.HasMember("TradeDiscountAmount") && !value["TradeDiscountAmount"].IsNull())
    {
        if (!value["TradeDiscountAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayOrderResult.TradeDiscountAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tradeDiscountAmount = string(value["TradeDiscountAmount"].GetString());
        m_tradeDiscountAmountHasBeenSet = true;
    }

    if (value.HasMember("PayName") && !value["PayName"].IsNull())
    {
        if (!value["PayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayOrderResult.PayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payName = string(value["PayName"].GetString());
        m_payNameHasBeenSet = true;
    }

    if (value.HasMember("OrderMerchantId") && !value["OrderMerchantId"].IsNull())
    {
        if (!value["OrderMerchantId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayOrderResult.OrderMerchantId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderMerchantId = string(value["OrderMerchantId"].GetString());
        m_orderMerchantIdHasBeenSet = true;
    }

    if (value.HasMember("TradeAccount") && !value["TradeAccount"].IsNull())
    {
        if (!value["TradeAccount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayOrderResult.TradeAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tradeAccount = string(value["TradeAccount"].GetString());
        m_tradeAccountHasBeenSet = true;
    }

    if (value.HasMember("TradeAmount") && !value["TradeAmount"].IsNull())
    {
        if (!value["TradeAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayOrderResult.TradeAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tradeAmount = string(value["TradeAmount"].GetString());
        m_tradeAmountHasBeenSet = true;
    }

    if (value.HasMember("CurrencySign") && !value["CurrencySign"].IsNull())
    {
        if (!value["CurrencySign"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayOrderResult.CurrencySign` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currencySign = string(value["CurrencySign"].GetString());
        m_currencySignHasBeenSet = true;
    }

    if (value.HasMember("TradePayTime") && !value["TradePayTime"].IsNull())
    {
        if (!value["TradePayTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayOrderResult.TradePayTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tradePayTime = string(value["TradePayTime"].GetString());
        m_tradePayTimeHasBeenSet = true;
    }

    if (value.HasMember("ShopOrderId") && !value["ShopOrderId"].IsNull())
    {
        if (!value["ShopOrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayOrderResult.ShopOrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shopOrderId = string(value["ShopOrderId"].GetString());
        m_shopOrderIdHasBeenSet = true;
    }

    if (value.HasMember("PayTag") && !value["PayTag"].IsNull())
    {
        if (!value["PayTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayOrderResult.PayTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payTag = string(value["PayTag"].GetString());
        m_payTagHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayOrderResult.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("OrderCurrency") && !value["OrderCurrency"].IsNull())
    {
        if (!value["OrderCurrency"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayOrderResult.OrderCurrency` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderCurrency = string(value["OrderCurrency"].GetString());
        m_orderCurrencyHasBeenSet = true;
    }

    if (value.HasMember("TradeQrcode") && !value["TradeQrcode"].IsNull())
    {
        if (!value["TradeQrcode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayOrderResult.TradeQrcode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tradeQrcode = string(value["TradeQrcode"].GetString());
        m_tradeQrcodeHasBeenSet = true;
    }

    if (value.HasMember("WechatAppId") && !value["WechatAppId"].IsNull())
    {
        if (!value["WechatAppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayOrderResult.WechatAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wechatAppId = string(value["WechatAppId"].GetString());
        m_wechatAppIdHasBeenSet = true;
    }

    if (value.HasMember("WechatTimeStamp") && !value["WechatTimeStamp"].IsNull())
    {
        if (!value["WechatTimeStamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayOrderResult.WechatTimeStamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wechatTimeStamp = string(value["WechatTimeStamp"].GetString());
        m_wechatTimeStampHasBeenSet = true;
    }

    if (value.HasMember("WechatNonceStr") && !value["WechatNonceStr"].IsNull())
    {
        if (!value["WechatNonceStr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayOrderResult.WechatNonceStr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wechatNonceStr = string(value["WechatNonceStr"].GetString());
        m_wechatNonceStrHasBeenSet = true;
    }

    if (value.HasMember("WechatSignType") && !value["WechatSignType"].IsNull())
    {
        if (!value["WechatSignType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayOrderResult.WechatSignType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wechatSignType = string(value["WechatSignType"].GetString());
        m_wechatSignTypeHasBeenSet = true;
    }

    if (value.HasMember("WechatPackage") && !value["WechatPackage"].IsNull())
    {
        if (!value["WechatPackage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayOrderResult.WechatPackage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wechatPackage = string(value["WechatPackage"].GetString());
        m_wechatPackageHasBeenSet = true;
    }

    if (value.HasMember("WechatPaySign") && !value["WechatPaySign"].IsNull())
    {
        if (!value["WechatPaySign"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayOrderResult.WechatPaySign` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wechatPaySign = string(value["WechatPaySign"].GetString());
        m_wechatPaySignHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PayOrderResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_tradeAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TradeAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tradeAccount.c_str(), allocator).Move(), allocator);
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

    if (m_tradeQrcodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TradeQrcode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tradeQrcode.c_str(), allocator).Move(), allocator);
    }

    if (m_wechatAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WechatAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wechatAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_wechatTimeStampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WechatTimeStamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wechatTimeStamp.c_str(), allocator).Move(), allocator);
    }

    if (m_wechatNonceStrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WechatNonceStr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wechatNonceStr.c_str(), allocator).Move(), allocator);
    }

    if (m_wechatSignTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WechatSignType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wechatSignType.c_str(), allocator).Move(), allocator);
    }

    if (m_wechatPackageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WechatPackage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wechatPackage.c_str(), allocator).Move(), allocator);
    }

    if (m_wechatPaySignHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WechatPaySign";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wechatPaySign.c_str(), allocator).Move(), allocator);
    }

}


string PayOrderResult::GetOrderNo() const
{
    return m_orderNo;
}

void PayOrderResult::SetOrderNo(const string& _orderNo)
{
    m_orderNo = _orderNo;
    m_orderNoHasBeenSet = true;
}

bool PayOrderResult::OrderNoHasBeenSet() const
{
    return m_orderNoHasBeenSet;
}

string PayOrderResult::GetDeveloperNo() const
{
    return m_developerNo;
}

void PayOrderResult::SetDeveloperNo(const string& _developerNo)
{
    m_developerNo = _developerNo;
    m_developerNoHasBeenSet = true;
}

bool PayOrderResult::DeveloperNoHasBeenSet() const
{
    return m_developerNoHasBeenSet;
}

string PayOrderResult::GetTradeDiscountAmount() const
{
    return m_tradeDiscountAmount;
}

void PayOrderResult::SetTradeDiscountAmount(const string& _tradeDiscountAmount)
{
    m_tradeDiscountAmount = _tradeDiscountAmount;
    m_tradeDiscountAmountHasBeenSet = true;
}

bool PayOrderResult::TradeDiscountAmountHasBeenSet() const
{
    return m_tradeDiscountAmountHasBeenSet;
}

string PayOrderResult::GetPayName() const
{
    return m_payName;
}

void PayOrderResult::SetPayName(const string& _payName)
{
    m_payName = _payName;
    m_payNameHasBeenSet = true;
}

bool PayOrderResult::PayNameHasBeenSet() const
{
    return m_payNameHasBeenSet;
}

string PayOrderResult::GetOrderMerchantId() const
{
    return m_orderMerchantId;
}

void PayOrderResult::SetOrderMerchantId(const string& _orderMerchantId)
{
    m_orderMerchantId = _orderMerchantId;
    m_orderMerchantIdHasBeenSet = true;
}

bool PayOrderResult::OrderMerchantIdHasBeenSet() const
{
    return m_orderMerchantIdHasBeenSet;
}

string PayOrderResult::GetTradeAccount() const
{
    return m_tradeAccount;
}

void PayOrderResult::SetTradeAccount(const string& _tradeAccount)
{
    m_tradeAccount = _tradeAccount;
    m_tradeAccountHasBeenSet = true;
}

bool PayOrderResult::TradeAccountHasBeenSet() const
{
    return m_tradeAccountHasBeenSet;
}

string PayOrderResult::GetTradeAmount() const
{
    return m_tradeAmount;
}

void PayOrderResult::SetTradeAmount(const string& _tradeAmount)
{
    m_tradeAmount = _tradeAmount;
    m_tradeAmountHasBeenSet = true;
}

bool PayOrderResult::TradeAmountHasBeenSet() const
{
    return m_tradeAmountHasBeenSet;
}

string PayOrderResult::GetCurrencySign() const
{
    return m_currencySign;
}

void PayOrderResult::SetCurrencySign(const string& _currencySign)
{
    m_currencySign = _currencySign;
    m_currencySignHasBeenSet = true;
}

bool PayOrderResult::CurrencySignHasBeenSet() const
{
    return m_currencySignHasBeenSet;
}

string PayOrderResult::GetTradePayTime() const
{
    return m_tradePayTime;
}

void PayOrderResult::SetTradePayTime(const string& _tradePayTime)
{
    m_tradePayTime = _tradePayTime;
    m_tradePayTimeHasBeenSet = true;
}

bool PayOrderResult::TradePayTimeHasBeenSet() const
{
    return m_tradePayTimeHasBeenSet;
}

string PayOrderResult::GetShopOrderId() const
{
    return m_shopOrderId;
}

void PayOrderResult::SetShopOrderId(const string& _shopOrderId)
{
    m_shopOrderId = _shopOrderId;
    m_shopOrderIdHasBeenSet = true;
}

bool PayOrderResult::ShopOrderIdHasBeenSet() const
{
    return m_shopOrderIdHasBeenSet;
}

string PayOrderResult::GetPayTag() const
{
    return m_payTag;
}

void PayOrderResult::SetPayTag(const string& _payTag)
{
    m_payTag = _payTag;
    m_payTagHasBeenSet = true;
}

bool PayOrderResult::PayTagHasBeenSet() const
{
    return m_payTagHasBeenSet;
}

string PayOrderResult::GetStatus() const
{
    return m_status;
}

void PayOrderResult::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool PayOrderResult::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string PayOrderResult::GetOrderCurrency() const
{
    return m_orderCurrency;
}

void PayOrderResult::SetOrderCurrency(const string& _orderCurrency)
{
    m_orderCurrency = _orderCurrency;
    m_orderCurrencyHasBeenSet = true;
}

bool PayOrderResult::OrderCurrencyHasBeenSet() const
{
    return m_orderCurrencyHasBeenSet;
}

string PayOrderResult::GetTradeQrcode() const
{
    return m_tradeQrcode;
}

void PayOrderResult::SetTradeQrcode(const string& _tradeQrcode)
{
    m_tradeQrcode = _tradeQrcode;
    m_tradeQrcodeHasBeenSet = true;
}

bool PayOrderResult::TradeQrcodeHasBeenSet() const
{
    return m_tradeQrcodeHasBeenSet;
}

string PayOrderResult::GetWechatAppId() const
{
    return m_wechatAppId;
}

void PayOrderResult::SetWechatAppId(const string& _wechatAppId)
{
    m_wechatAppId = _wechatAppId;
    m_wechatAppIdHasBeenSet = true;
}

bool PayOrderResult::WechatAppIdHasBeenSet() const
{
    return m_wechatAppIdHasBeenSet;
}

string PayOrderResult::GetWechatTimeStamp() const
{
    return m_wechatTimeStamp;
}

void PayOrderResult::SetWechatTimeStamp(const string& _wechatTimeStamp)
{
    m_wechatTimeStamp = _wechatTimeStamp;
    m_wechatTimeStampHasBeenSet = true;
}

bool PayOrderResult::WechatTimeStampHasBeenSet() const
{
    return m_wechatTimeStampHasBeenSet;
}

string PayOrderResult::GetWechatNonceStr() const
{
    return m_wechatNonceStr;
}

void PayOrderResult::SetWechatNonceStr(const string& _wechatNonceStr)
{
    m_wechatNonceStr = _wechatNonceStr;
    m_wechatNonceStrHasBeenSet = true;
}

bool PayOrderResult::WechatNonceStrHasBeenSet() const
{
    return m_wechatNonceStrHasBeenSet;
}

string PayOrderResult::GetWechatSignType() const
{
    return m_wechatSignType;
}

void PayOrderResult::SetWechatSignType(const string& _wechatSignType)
{
    m_wechatSignType = _wechatSignType;
    m_wechatSignTypeHasBeenSet = true;
}

bool PayOrderResult::WechatSignTypeHasBeenSet() const
{
    return m_wechatSignTypeHasBeenSet;
}

string PayOrderResult::GetWechatPackage() const
{
    return m_wechatPackage;
}

void PayOrderResult::SetWechatPackage(const string& _wechatPackage)
{
    m_wechatPackage = _wechatPackage;
    m_wechatPackageHasBeenSet = true;
}

bool PayOrderResult::WechatPackageHasBeenSet() const
{
    return m_wechatPackageHasBeenSet;
}

string PayOrderResult::GetWechatPaySign() const
{
    return m_wechatPaySign;
}

void PayOrderResult::SetWechatPaySign(const string& _wechatPaySign)
{
    m_wechatPaySign = _wechatPaySign;
    m_wechatPaySignHasBeenSet = true;
}

bool PayOrderResult::WechatPaySignHasBeenSet() const
{
    return m_wechatPaySignHasBeenSet;
}


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

#include <tencentcloud/cpdp/v20190820/model/QueryOrderStatusResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryOrderStatusResult::QueryOrderStatusResult() :
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
    m_tradeTimeHasBeenSet(false),
    m_discountAmountHasBeenSet(false),
    m_merchantNoHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_orderNameHasBeenSet(false),
    m_originalAmountHasBeenSet(false),
    m_shopNoHasBeenSet(false),
    m_tradeResultHasBeenSet(false),
    m_orderIdHasBeenSet(false),
    m_orderTypeHasBeenSet(false),
    m_tradeNoHasBeenSet(false),
    m_originalOrderNoHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_addTimeHasBeenSet(false),
    m_cashierIdHasBeenSet(false),
    m_cashierRealNameHasBeenSet(false),
    m_shopFullNameHasBeenSet(false),
    m_shopNameHasBeenSet(false)
{
}

CoreInternalOutcome QueryOrderStatusResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OrderNo") && !value["OrderNo"].IsNull())
    {
        if (!value["OrderNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderStatusResult.OrderNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderNo = string(value["OrderNo"].GetString());
        m_orderNoHasBeenSet = true;
    }

    if (value.HasMember("DeveloperNo") && !value["DeveloperNo"].IsNull())
    {
        if (!value["DeveloperNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderStatusResult.DeveloperNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_developerNo = string(value["DeveloperNo"].GetString());
        m_developerNoHasBeenSet = true;
    }

    if (value.HasMember("TradeDiscountAmount") && !value["TradeDiscountAmount"].IsNull())
    {
        if (!value["TradeDiscountAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderStatusResult.TradeDiscountAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tradeDiscountAmount = string(value["TradeDiscountAmount"].GetString());
        m_tradeDiscountAmountHasBeenSet = true;
    }

    if (value.HasMember("PayName") && !value["PayName"].IsNull())
    {
        if (!value["PayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderStatusResult.PayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payName = string(value["PayName"].GetString());
        m_payNameHasBeenSet = true;
    }

    if (value.HasMember("OrderMerchantId") && !value["OrderMerchantId"].IsNull())
    {
        if (!value["OrderMerchantId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderStatusResult.OrderMerchantId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderMerchantId = string(value["OrderMerchantId"].GetString());
        m_orderMerchantIdHasBeenSet = true;
    }

    if (value.HasMember("TradeAccount") && !value["TradeAccount"].IsNull())
    {
        if (!value["TradeAccount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderStatusResult.TradeAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tradeAccount = string(value["TradeAccount"].GetString());
        m_tradeAccountHasBeenSet = true;
    }

    if (value.HasMember("TradeAmount") && !value["TradeAmount"].IsNull())
    {
        if (!value["TradeAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderStatusResult.TradeAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tradeAmount = string(value["TradeAmount"].GetString());
        m_tradeAmountHasBeenSet = true;
    }

    if (value.HasMember("CurrencySign") && !value["CurrencySign"].IsNull())
    {
        if (!value["CurrencySign"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderStatusResult.CurrencySign` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currencySign = string(value["CurrencySign"].GetString());
        m_currencySignHasBeenSet = true;
    }

    if (value.HasMember("TradePayTime") && !value["TradePayTime"].IsNull())
    {
        if (!value["TradePayTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderStatusResult.TradePayTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tradePayTime = string(value["TradePayTime"].GetString());
        m_tradePayTimeHasBeenSet = true;
    }

    if (value.HasMember("ShopOrderId") && !value["ShopOrderId"].IsNull())
    {
        if (!value["ShopOrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderStatusResult.ShopOrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shopOrderId = string(value["ShopOrderId"].GetString());
        m_shopOrderIdHasBeenSet = true;
    }

    if (value.HasMember("PayTag") && !value["PayTag"].IsNull())
    {
        if (!value["PayTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderStatusResult.PayTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payTag = string(value["PayTag"].GetString());
        m_payTagHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderStatusResult.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("OrderCurrency") && !value["OrderCurrency"].IsNull())
    {
        if (!value["OrderCurrency"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderStatusResult.OrderCurrency` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderCurrency = string(value["OrderCurrency"].GetString());
        m_orderCurrencyHasBeenSet = true;
    }

    if (value.HasMember("TradeQrcode") && !value["TradeQrcode"].IsNull())
    {
        if (!value["TradeQrcode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderStatusResult.TradeQrcode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tradeQrcode = string(value["TradeQrcode"].GetString());
        m_tradeQrcodeHasBeenSet = true;
    }

    if (value.HasMember("TradeTime") && !value["TradeTime"].IsNull())
    {
        if (!value["TradeTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderStatusResult.TradeTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tradeTime = string(value["TradeTime"].GetString());
        m_tradeTimeHasBeenSet = true;
    }

    if (value.HasMember("DiscountAmount") && !value["DiscountAmount"].IsNull())
    {
        if (!value["DiscountAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderStatusResult.DiscountAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_discountAmount = string(value["DiscountAmount"].GetString());
        m_discountAmountHasBeenSet = true;
    }

    if (value.HasMember("MerchantNo") && !value["MerchantNo"].IsNull())
    {
        if (!value["MerchantNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderStatusResult.MerchantNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_merchantNo = string(value["MerchantNo"].GetString());
        m_merchantNoHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderStatusResult.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("OrderName") && !value["OrderName"].IsNull())
    {
        if (!value["OrderName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderStatusResult.OrderName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderName = string(value["OrderName"].GetString());
        m_orderNameHasBeenSet = true;
    }

    if (value.HasMember("OriginalAmount") && !value["OriginalAmount"].IsNull())
    {
        if (!value["OriginalAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderStatusResult.OriginalAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originalAmount = string(value["OriginalAmount"].GetString());
        m_originalAmountHasBeenSet = true;
    }

    if (value.HasMember("ShopNo") && !value["ShopNo"].IsNull())
    {
        if (!value["ShopNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderStatusResult.ShopNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shopNo = string(value["ShopNo"].GetString());
        m_shopNoHasBeenSet = true;
    }

    if (value.HasMember("TradeResult") && !value["TradeResult"].IsNull())
    {
        if (!value["TradeResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderStatusResult.TradeResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tradeResult = string(value["TradeResult"].GetString());
        m_tradeResultHasBeenSet = true;
    }

    if (value.HasMember("OrderId") && !value["OrderId"].IsNull())
    {
        if (!value["OrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderStatusResult.OrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderId = string(value["OrderId"].GetString());
        m_orderIdHasBeenSet = true;
    }

    if (value.HasMember("OrderType") && !value["OrderType"].IsNull())
    {
        if (!value["OrderType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderStatusResult.OrderType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderType = string(value["OrderType"].GetString());
        m_orderTypeHasBeenSet = true;
    }

    if (value.HasMember("TradeNo") && !value["TradeNo"].IsNull())
    {
        if (!value["TradeNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderStatusResult.TradeNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tradeNo = string(value["TradeNo"].GetString());
        m_tradeNoHasBeenSet = true;
    }

    if (value.HasMember("OriginalOrderNo") && !value["OriginalOrderNo"].IsNull())
    {
        if (!value["OriginalOrderNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderStatusResult.OriginalOrderNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originalOrderNo = string(value["OriginalOrderNo"].GetString());
        m_originalOrderNoHasBeenSet = true;
    }

    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderStatusResult.Tag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tag = string(value["Tag"].GetString());
        m_tagHasBeenSet = true;
    }

    if (value.HasMember("AddTime") && !value["AddTime"].IsNull())
    {
        if (!value["AddTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderStatusResult.AddTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addTime = string(value["AddTime"].GetString());
        m_addTimeHasBeenSet = true;
    }

    if (value.HasMember("CashierId") && !value["CashierId"].IsNull())
    {
        if (!value["CashierId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderStatusResult.CashierId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cashierId = string(value["CashierId"].GetString());
        m_cashierIdHasBeenSet = true;
    }

    if (value.HasMember("CashierRealName") && !value["CashierRealName"].IsNull())
    {
        if (!value["CashierRealName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderStatusResult.CashierRealName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cashierRealName = string(value["CashierRealName"].GetString());
        m_cashierRealNameHasBeenSet = true;
    }

    if (value.HasMember("ShopFullName") && !value["ShopFullName"].IsNull())
    {
        if (!value["ShopFullName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderStatusResult.ShopFullName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shopFullName = string(value["ShopFullName"].GetString());
        m_shopFullNameHasBeenSet = true;
    }

    if (value.HasMember("ShopName") && !value["ShopName"].IsNull())
    {
        if (!value["ShopName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOrderStatusResult.ShopName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shopName = string(value["ShopName"].GetString());
        m_shopNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryOrderStatusResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_merchantNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_merchantNo.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_orderNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderName.c_str(), allocator).Move(), allocator);
    }

    if (m_originalAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originalAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_shopNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShopNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shopNo.c_str(), allocator).Move(), allocator);
    }

    if (m_tradeResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TradeResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tradeResult.c_str(), allocator).Move(), allocator);
    }

    if (m_orderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderId.c_str(), allocator).Move(), allocator);
    }

    if (m_orderTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderType.c_str(), allocator).Move(), allocator);
    }

    if (m_tradeNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TradeNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tradeNo.c_str(), allocator).Move(), allocator);
    }

    if (m_originalOrderNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalOrderNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originalOrderNo.c_str(), allocator).Move(), allocator);
    }

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tag.c_str(), allocator).Move(), allocator);
    }

    if (m_addTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addTime.c_str(), allocator).Move(), allocator);
    }

    if (m_cashierIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CashierId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cashierId.c_str(), allocator).Move(), allocator);
    }

    if (m_cashierRealNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CashierRealName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cashierRealName.c_str(), allocator).Move(), allocator);
    }

    if (m_shopFullNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShopFullName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shopFullName.c_str(), allocator).Move(), allocator);
    }

    if (m_shopNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShopName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shopName.c_str(), allocator).Move(), allocator);
    }

}


string QueryOrderStatusResult::GetOrderNo() const
{
    return m_orderNo;
}

void QueryOrderStatusResult::SetOrderNo(const string& _orderNo)
{
    m_orderNo = _orderNo;
    m_orderNoHasBeenSet = true;
}

bool QueryOrderStatusResult::OrderNoHasBeenSet() const
{
    return m_orderNoHasBeenSet;
}

string QueryOrderStatusResult::GetDeveloperNo() const
{
    return m_developerNo;
}

void QueryOrderStatusResult::SetDeveloperNo(const string& _developerNo)
{
    m_developerNo = _developerNo;
    m_developerNoHasBeenSet = true;
}

bool QueryOrderStatusResult::DeveloperNoHasBeenSet() const
{
    return m_developerNoHasBeenSet;
}

string QueryOrderStatusResult::GetTradeDiscountAmount() const
{
    return m_tradeDiscountAmount;
}

void QueryOrderStatusResult::SetTradeDiscountAmount(const string& _tradeDiscountAmount)
{
    m_tradeDiscountAmount = _tradeDiscountAmount;
    m_tradeDiscountAmountHasBeenSet = true;
}

bool QueryOrderStatusResult::TradeDiscountAmountHasBeenSet() const
{
    return m_tradeDiscountAmountHasBeenSet;
}

string QueryOrderStatusResult::GetPayName() const
{
    return m_payName;
}

void QueryOrderStatusResult::SetPayName(const string& _payName)
{
    m_payName = _payName;
    m_payNameHasBeenSet = true;
}

bool QueryOrderStatusResult::PayNameHasBeenSet() const
{
    return m_payNameHasBeenSet;
}

string QueryOrderStatusResult::GetOrderMerchantId() const
{
    return m_orderMerchantId;
}

void QueryOrderStatusResult::SetOrderMerchantId(const string& _orderMerchantId)
{
    m_orderMerchantId = _orderMerchantId;
    m_orderMerchantIdHasBeenSet = true;
}

bool QueryOrderStatusResult::OrderMerchantIdHasBeenSet() const
{
    return m_orderMerchantIdHasBeenSet;
}

string QueryOrderStatusResult::GetTradeAccount() const
{
    return m_tradeAccount;
}

void QueryOrderStatusResult::SetTradeAccount(const string& _tradeAccount)
{
    m_tradeAccount = _tradeAccount;
    m_tradeAccountHasBeenSet = true;
}

bool QueryOrderStatusResult::TradeAccountHasBeenSet() const
{
    return m_tradeAccountHasBeenSet;
}

string QueryOrderStatusResult::GetTradeAmount() const
{
    return m_tradeAmount;
}

void QueryOrderStatusResult::SetTradeAmount(const string& _tradeAmount)
{
    m_tradeAmount = _tradeAmount;
    m_tradeAmountHasBeenSet = true;
}

bool QueryOrderStatusResult::TradeAmountHasBeenSet() const
{
    return m_tradeAmountHasBeenSet;
}

string QueryOrderStatusResult::GetCurrencySign() const
{
    return m_currencySign;
}

void QueryOrderStatusResult::SetCurrencySign(const string& _currencySign)
{
    m_currencySign = _currencySign;
    m_currencySignHasBeenSet = true;
}

bool QueryOrderStatusResult::CurrencySignHasBeenSet() const
{
    return m_currencySignHasBeenSet;
}

string QueryOrderStatusResult::GetTradePayTime() const
{
    return m_tradePayTime;
}

void QueryOrderStatusResult::SetTradePayTime(const string& _tradePayTime)
{
    m_tradePayTime = _tradePayTime;
    m_tradePayTimeHasBeenSet = true;
}

bool QueryOrderStatusResult::TradePayTimeHasBeenSet() const
{
    return m_tradePayTimeHasBeenSet;
}

string QueryOrderStatusResult::GetShopOrderId() const
{
    return m_shopOrderId;
}

void QueryOrderStatusResult::SetShopOrderId(const string& _shopOrderId)
{
    m_shopOrderId = _shopOrderId;
    m_shopOrderIdHasBeenSet = true;
}

bool QueryOrderStatusResult::ShopOrderIdHasBeenSet() const
{
    return m_shopOrderIdHasBeenSet;
}

string QueryOrderStatusResult::GetPayTag() const
{
    return m_payTag;
}

void QueryOrderStatusResult::SetPayTag(const string& _payTag)
{
    m_payTag = _payTag;
    m_payTagHasBeenSet = true;
}

bool QueryOrderStatusResult::PayTagHasBeenSet() const
{
    return m_payTagHasBeenSet;
}

string QueryOrderStatusResult::GetStatus() const
{
    return m_status;
}

void QueryOrderStatusResult::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool QueryOrderStatusResult::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string QueryOrderStatusResult::GetOrderCurrency() const
{
    return m_orderCurrency;
}

void QueryOrderStatusResult::SetOrderCurrency(const string& _orderCurrency)
{
    m_orderCurrency = _orderCurrency;
    m_orderCurrencyHasBeenSet = true;
}

bool QueryOrderStatusResult::OrderCurrencyHasBeenSet() const
{
    return m_orderCurrencyHasBeenSet;
}

string QueryOrderStatusResult::GetTradeQrcode() const
{
    return m_tradeQrcode;
}

void QueryOrderStatusResult::SetTradeQrcode(const string& _tradeQrcode)
{
    m_tradeQrcode = _tradeQrcode;
    m_tradeQrcodeHasBeenSet = true;
}

bool QueryOrderStatusResult::TradeQrcodeHasBeenSet() const
{
    return m_tradeQrcodeHasBeenSet;
}

string QueryOrderStatusResult::GetTradeTime() const
{
    return m_tradeTime;
}

void QueryOrderStatusResult::SetTradeTime(const string& _tradeTime)
{
    m_tradeTime = _tradeTime;
    m_tradeTimeHasBeenSet = true;
}

bool QueryOrderStatusResult::TradeTimeHasBeenSet() const
{
    return m_tradeTimeHasBeenSet;
}

string QueryOrderStatusResult::GetDiscountAmount() const
{
    return m_discountAmount;
}

void QueryOrderStatusResult::SetDiscountAmount(const string& _discountAmount)
{
    m_discountAmount = _discountAmount;
    m_discountAmountHasBeenSet = true;
}

bool QueryOrderStatusResult::DiscountAmountHasBeenSet() const
{
    return m_discountAmountHasBeenSet;
}

string QueryOrderStatusResult::GetMerchantNo() const
{
    return m_merchantNo;
}

void QueryOrderStatusResult::SetMerchantNo(const string& _merchantNo)
{
    m_merchantNo = _merchantNo;
    m_merchantNoHasBeenSet = true;
}

bool QueryOrderStatusResult::MerchantNoHasBeenSet() const
{
    return m_merchantNoHasBeenSet;
}

string QueryOrderStatusResult::GetRemark() const
{
    return m_remark;
}

void QueryOrderStatusResult::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool QueryOrderStatusResult::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string QueryOrderStatusResult::GetOrderName() const
{
    return m_orderName;
}

void QueryOrderStatusResult::SetOrderName(const string& _orderName)
{
    m_orderName = _orderName;
    m_orderNameHasBeenSet = true;
}

bool QueryOrderStatusResult::OrderNameHasBeenSet() const
{
    return m_orderNameHasBeenSet;
}

string QueryOrderStatusResult::GetOriginalAmount() const
{
    return m_originalAmount;
}

void QueryOrderStatusResult::SetOriginalAmount(const string& _originalAmount)
{
    m_originalAmount = _originalAmount;
    m_originalAmountHasBeenSet = true;
}

bool QueryOrderStatusResult::OriginalAmountHasBeenSet() const
{
    return m_originalAmountHasBeenSet;
}

string QueryOrderStatusResult::GetShopNo() const
{
    return m_shopNo;
}

void QueryOrderStatusResult::SetShopNo(const string& _shopNo)
{
    m_shopNo = _shopNo;
    m_shopNoHasBeenSet = true;
}

bool QueryOrderStatusResult::ShopNoHasBeenSet() const
{
    return m_shopNoHasBeenSet;
}

string QueryOrderStatusResult::GetTradeResult() const
{
    return m_tradeResult;
}

void QueryOrderStatusResult::SetTradeResult(const string& _tradeResult)
{
    m_tradeResult = _tradeResult;
    m_tradeResultHasBeenSet = true;
}

bool QueryOrderStatusResult::TradeResultHasBeenSet() const
{
    return m_tradeResultHasBeenSet;
}

string QueryOrderStatusResult::GetOrderId() const
{
    return m_orderId;
}

void QueryOrderStatusResult::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool QueryOrderStatusResult::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

string QueryOrderStatusResult::GetOrderType() const
{
    return m_orderType;
}

void QueryOrderStatusResult::SetOrderType(const string& _orderType)
{
    m_orderType = _orderType;
    m_orderTypeHasBeenSet = true;
}

bool QueryOrderStatusResult::OrderTypeHasBeenSet() const
{
    return m_orderTypeHasBeenSet;
}

string QueryOrderStatusResult::GetTradeNo() const
{
    return m_tradeNo;
}

void QueryOrderStatusResult::SetTradeNo(const string& _tradeNo)
{
    m_tradeNo = _tradeNo;
    m_tradeNoHasBeenSet = true;
}

bool QueryOrderStatusResult::TradeNoHasBeenSet() const
{
    return m_tradeNoHasBeenSet;
}

string QueryOrderStatusResult::GetOriginalOrderNo() const
{
    return m_originalOrderNo;
}

void QueryOrderStatusResult::SetOriginalOrderNo(const string& _originalOrderNo)
{
    m_originalOrderNo = _originalOrderNo;
    m_originalOrderNoHasBeenSet = true;
}

bool QueryOrderStatusResult::OriginalOrderNoHasBeenSet() const
{
    return m_originalOrderNoHasBeenSet;
}

string QueryOrderStatusResult::GetTag() const
{
    return m_tag;
}

void QueryOrderStatusResult::SetTag(const string& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool QueryOrderStatusResult::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

string QueryOrderStatusResult::GetAddTime() const
{
    return m_addTime;
}

void QueryOrderStatusResult::SetAddTime(const string& _addTime)
{
    m_addTime = _addTime;
    m_addTimeHasBeenSet = true;
}

bool QueryOrderStatusResult::AddTimeHasBeenSet() const
{
    return m_addTimeHasBeenSet;
}

string QueryOrderStatusResult::GetCashierId() const
{
    return m_cashierId;
}

void QueryOrderStatusResult::SetCashierId(const string& _cashierId)
{
    m_cashierId = _cashierId;
    m_cashierIdHasBeenSet = true;
}

bool QueryOrderStatusResult::CashierIdHasBeenSet() const
{
    return m_cashierIdHasBeenSet;
}

string QueryOrderStatusResult::GetCashierRealName() const
{
    return m_cashierRealName;
}

void QueryOrderStatusResult::SetCashierRealName(const string& _cashierRealName)
{
    m_cashierRealName = _cashierRealName;
    m_cashierRealNameHasBeenSet = true;
}

bool QueryOrderStatusResult::CashierRealNameHasBeenSet() const
{
    return m_cashierRealNameHasBeenSet;
}

string QueryOrderStatusResult::GetShopFullName() const
{
    return m_shopFullName;
}

void QueryOrderStatusResult::SetShopFullName(const string& _shopFullName)
{
    m_shopFullName = _shopFullName;
    m_shopFullNameHasBeenSet = true;
}

bool QueryOrderStatusResult::ShopFullNameHasBeenSet() const
{
    return m_shopFullNameHasBeenSet;
}

string QueryOrderStatusResult::GetShopName() const
{
    return m_shopName;
}

void QueryOrderStatusResult::SetShopName(const string& _shopName)
{
    m_shopName = _shopName;
    m_shopNameHasBeenSet = true;
}

bool QueryOrderStatusResult::ShopNameHasBeenSet() const
{
    return m_shopNameHasBeenSet;
}


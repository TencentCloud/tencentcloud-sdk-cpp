/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/rce/v20260130/model/CreateOrderEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20260130::Model;
using namespace std;

CreateOrderEvent::CreateOrderEvent() :
    m_orderIdHasBeenSet(false),
    m_amountHasBeenSet(false),
    m_merchantHasBeenSet(false),
    m_billingHasBeenSet(false),
    m_itemsHasBeenSet(false),
    m_deliveryHasBeenSet(false),
    m_promotionsHasBeenSet(false),
    m_custHasBeenSet(false)
{
}

CoreInternalOutcome CreateOrderEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OrderId") && !value["OrderId"].IsNull())
    {
        if (!value["OrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateOrderEvent.OrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderId = string(value["OrderId"].GetString());
        m_orderIdHasBeenSet = true;
    }

    if (value.HasMember("Amount") && !value["Amount"].IsNull())
    {
        if (!value["Amount"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CreateOrderEvent.Amount` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_amount.Deserialize(value["Amount"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_amountHasBeenSet = true;
    }

    if (value.HasMember("Merchant") && !value["Merchant"].IsNull())
    {
        if (!value["Merchant"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CreateOrderEvent.Merchant` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_merchant.Deserialize(value["Merchant"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_merchantHasBeenSet = true;
    }

    if (value.HasMember("Billing") && !value["Billing"].IsNull())
    {
        if (!value["Billing"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CreateOrderEvent.Billing` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_billing.Deserialize(value["Billing"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_billingHasBeenSet = true;
    }

    if (value.HasMember("Items") && !value["Items"].IsNull())
    {
        if (!value["Items"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CreateOrderEvent.Items` is not array type"));

        const rapidjson::Value &tmpValue = value["Items"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Item item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_items.push_back(item);
        }
        m_itemsHasBeenSet = true;
    }

    if (value.HasMember("Delivery") && !value["Delivery"].IsNull())
    {
        if (!value["Delivery"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CreateOrderEvent.Delivery` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_delivery.Deserialize(value["Delivery"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_deliveryHasBeenSet = true;
    }

    if (value.HasMember("Promotions") && !value["Promotions"].IsNull())
    {
        if (!value["Promotions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CreateOrderEvent.Promotions` is not array type"));

        const rapidjson::Value &tmpValue = value["Promotions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Promotion item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_promotions.push_back(item);
        }
        m_promotionsHasBeenSet = true;
    }

    if (value.HasMember("Cust") && !value["Cust"].IsNull())
    {
        if (!value["Cust"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CreateOrderEvent.Cust` is not array type"));

        const rapidjson::Value &tmpValue = value["Cust"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Cust item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cust.push_back(item);
        }
        m_custHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateOrderEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_orderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderId.c_str(), allocator).Move(), allocator);
    }

    if (m_amountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Amount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_amount.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_merchantHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Merchant";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_merchant.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_billingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Billing";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_billing.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_itemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Items";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_items.begin(); itr != m_items.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_deliveryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Delivery";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_delivery.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_promotionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Promotions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_promotions.begin(); itr != m_promotions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_custHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cust";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cust.begin(); itr != m_cust.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string CreateOrderEvent::GetOrderId() const
{
    return m_orderId;
}

void CreateOrderEvent::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool CreateOrderEvent::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

Amount CreateOrderEvent::GetAmount() const
{
    return m_amount;
}

void CreateOrderEvent::SetAmount(const Amount& _amount)
{
    m_amount = _amount;
    m_amountHasBeenSet = true;
}

bool CreateOrderEvent::AmountHasBeenSet() const
{
    return m_amountHasBeenSet;
}

Merchant CreateOrderEvent::GetMerchant() const
{
    return m_merchant;
}

void CreateOrderEvent::SetMerchant(const Merchant& _merchant)
{
    m_merchant = _merchant;
    m_merchantHasBeenSet = true;
}

bool CreateOrderEvent::MerchantHasBeenSet() const
{
    return m_merchantHasBeenSet;
}

Billing CreateOrderEvent::GetBilling() const
{
    return m_billing;
}

void CreateOrderEvent::SetBilling(const Billing& _billing)
{
    m_billing = _billing;
    m_billingHasBeenSet = true;
}

bool CreateOrderEvent::BillingHasBeenSet() const
{
    return m_billingHasBeenSet;
}

vector<Item> CreateOrderEvent::GetItems() const
{
    return m_items;
}

void CreateOrderEvent::SetItems(const vector<Item>& _items)
{
    m_items = _items;
    m_itemsHasBeenSet = true;
}

bool CreateOrderEvent::ItemsHasBeenSet() const
{
    return m_itemsHasBeenSet;
}

Delivery CreateOrderEvent::GetDelivery() const
{
    return m_delivery;
}

void CreateOrderEvent::SetDelivery(const Delivery& _delivery)
{
    m_delivery = _delivery;
    m_deliveryHasBeenSet = true;
}

bool CreateOrderEvent::DeliveryHasBeenSet() const
{
    return m_deliveryHasBeenSet;
}

vector<Promotion> CreateOrderEvent::GetPromotions() const
{
    return m_promotions;
}

void CreateOrderEvent::SetPromotions(const vector<Promotion>& _promotions)
{
    m_promotions = _promotions;
    m_promotionsHasBeenSet = true;
}

bool CreateOrderEvent::PromotionsHasBeenSet() const
{
    return m_promotionsHasBeenSet;
}

vector<Cust> CreateOrderEvent::GetCust() const
{
    return m_cust;
}

void CreateOrderEvent::SetCust(const vector<Cust>& _cust)
{
    m_cust = _cust;
    m_custHasBeenSet = true;
}

bool CreateOrderEvent::CustHasBeenSet() const
{
    return m_custHasBeenSet;
}


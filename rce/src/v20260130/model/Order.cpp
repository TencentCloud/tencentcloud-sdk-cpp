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

#include <tencentcloud/rce/v20260130/model/Order.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20260130::Model;
using namespace std;

Order::Order() :
    m_orderIdHasBeenSet(false),
    m_amountHasBeenSet(false),
    m_itemsHasBeenSet(false),
    m_deliveryHasBeenSet(false)
{
}

CoreInternalOutcome Order::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OrderId") && !value["OrderId"].IsNull())
    {
        if (!value["OrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Order.OrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderId = string(value["OrderId"].GetString());
        m_orderIdHasBeenSet = true;
    }

    if (value.HasMember("Amount") && !value["Amount"].IsNull())
    {
        if (!value["Amount"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Order.Amount` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_amount.Deserialize(value["Amount"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_amountHasBeenSet = true;
    }

    if (value.HasMember("Items") && !value["Items"].IsNull())
    {
        if (!value["Items"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Order.Items` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `Order.Delivery` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_delivery.Deserialize(value["Delivery"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_deliveryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Order::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


string Order::GetOrderId() const
{
    return m_orderId;
}

void Order::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool Order::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

Amount Order::GetAmount() const
{
    return m_amount;
}

void Order::SetAmount(const Amount& _amount)
{
    m_amount = _amount;
    m_amountHasBeenSet = true;
}

bool Order::AmountHasBeenSet() const
{
    return m_amountHasBeenSet;
}

vector<Item> Order::GetItems() const
{
    return m_items;
}

void Order::SetItems(const vector<Item>& _items)
{
    m_items = _items;
    m_itemsHasBeenSet = true;
}

bool Order::ItemsHasBeenSet() const
{
    return m_itemsHasBeenSet;
}

Delivery Order::GetDelivery() const
{
    return m_delivery;
}

void Order::SetDelivery(const Delivery& _delivery)
{
    m_delivery = _delivery;
    m_deliveryHasBeenSet = true;
}

bool Order::DeliveryHasBeenSet() const
{
    return m_deliveryHasBeenSet;
}


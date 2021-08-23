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

#include <tencentcloud/cpdp/v20190820/model/Order.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

Order::Order() :
    m_amountHasTaxHasBeenSet(false),
    m_discountHasBeenSet(false),
    m_sellerNameHasBeenSet(false),
    m_invoiceTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_amountHasBeenSet(false),
    m_orderDateHasBeenSet(false),
    m_orderIdHasBeenSet(false),
    m_storeNoHasBeenSet(false),
    m_itemsHasBeenSet(false)
{
}

CoreInternalOutcome Order::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AmountHasTax") && !value["AmountHasTax"].IsNull())
    {
        if (!value["AmountHasTax"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Order.AmountHasTax` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_amountHasTax = value["AmountHasTax"].GetDouble();
        m_amountHasTaxHasBeenSet = true;
    }

    if (value.HasMember("Discount") && !value["Discount"].IsNull())
    {
        if (!value["Discount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Order.Discount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_discount = value["Discount"].GetDouble();
        m_discountHasBeenSet = true;
    }

    if (value.HasMember("SellerName") && !value["SellerName"].IsNull())
    {
        if (!value["SellerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Order.SellerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sellerName = string(value["SellerName"].GetString());
        m_sellerNameHasBeenSet = true;
    }

    if (value.HasMember("InvoiceType") && !value["InvoiceType"].IsNull())
    {
        if (!value["InvoiceType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Order.InvoiceType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_invoiceType = value["InvoiceType"].GetInt64();
        m_invoiceTypeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Order.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Amount") && !value["Amount"].IsNull())
    {
        if (!value["Amount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Order.Amount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_amount = value["Amount"].GetDouble();
        m_amountHasBeenSet = true;
    }

    if (value.HasMember("OrderDate") && !value["OrderDate"].IsNull())
    {
        if (!value["OrderDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Order.OrderDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderDate = string(value["OrderDate"].GetString());
        m_orderDateHasBeenSet = true;
    }

    if (value.HasMember("OrderId") && !value["OrderId"].IsNull())
    {
        if (!value["OrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Order.OrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderId = string(value["OrderId"].GetString());
        m_orderIdHasBeenSet = true;
    }

    if (value.HasMember("StoreNo") && !value["StoreNo"].IsNull())
    {
        if (!value["StoreNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Order.StoreNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storeNo = string(value["StoreNo"].GetString());
        m_storeNoHasBeenSet = true;
    }

    if (value.HasMember("Items") && !value["Items"].IsNull())
    {
        if (!value["Items"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Order.Items` is not array type"));

        const rapidjson::Value &tmpValue = value["Items"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OrderItem item;
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


    return CoreInternalOutcome(true);
}

void Order::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_amountHasTaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AmountHasTax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_amountHasTax, allocator);
    }

    if (m_discountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Discount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_discount, allocator);
    }

    if (m_sellerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SellerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sellerName.c_str(), allocator).Move(), allocator);
    }

    if (m_invoiceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvoiceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_invoiceType, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_amountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Amount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_amount, allocator);
    }

    if (m_orderDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderDate.c_str(), allocator).Move(), allocator);
    }

    if (m_orderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderId.c_str(), allocator).Move(), allocator);
    }

    if (m_storeNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StoreNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storeNo.c_str(), allocator).Move(), allocator);
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

}


double Order::GetAmountHasTax() const
{
    return m_amountHasTax;
}

void Order::SetAmountHasTax(const double& _amountHasTax)
{
    m_amountHasTax = _amountHasTax;
    m_amountHasTaxHasBeenSet = true;
}

bool Order::AmountHasTaxHasBeenSet() const
{
    return m_amountHasTaxHasBeenSet;
}

double Order::GetDiscount() const
{
    return m_discount;
}

void Order::SetDiscount(const double& _discount)
{
    m_discount = _discount;
    m_discountHasBeenSet = true;
}

bool Order::DiscountHasBeenSet() const
{
    return m_discountHasBeenSet;
}

string Order::GetSellerName() const
{
    return m_sellerName;
}

void Order::SetSellerName(const string& _sellerName)
{
    m_sellerName = _sellerName;
    m_sellerNameHasBeenSet = true;
}

bool Order::SellerNameHasBeenSet() const
{
    return m_sellerNameHasBeenSet;
}

int64_t Order::GetInvoiceType() const
{
    return m_invoiceType;
}

void Order::SetInvoiceType(const int64_t& _invoiceType)
{
    m_invoiceType = _invoiceType;
    m_invoiceTypeHasBeenSet = true;
}

bool Order::InvoiceTypeHasBeenSet() const
{
    return m_invoiceTypeHasBeenSet;
}

string Order::GetName() const
{
    return m_name;
}

void Order::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Order::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

double Order::GetAmount() const
{
    return m_amount;
}

void Order::SetAmount(const double& _amount)
{
    m_amount = _amount;
    m_amountHasBeenSet = true;
}

bool Order::AmountHasBeenSet() const
{
    return m_amountHasBeenSet;
}

string Order::GetOrderDate() const
{
    return m_orderDate;
}

void Order::SetOrderDate(const string& _orderDate)
{
    m_orderDate = _orderDate;
    m_orderDateHasBeenSet = true;
}

bool Order::OrderDateHasBeenSet() const
{
    return m_orderDateHasBeenSet;
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

string Order::GetStoreNo() const
{
    return m_storeNo;
}

void Order::SetStoreNo(const string& _storeNo)
{
    m_storeNo = _storeNo;
    m_storeNoHasBeenSet = true;
}

bool Order::StoreNoHasBeenSet() const
{
    return m_storeNoHasBeenSet;
}

vector<OrderItem> Order::GetItems() const
{
    return m_items;
}

void Order::SetItems(const vector<OrderItem>& _items)
{
    m_items = _items;
    m_itemsHasBeenSet = true;
}

bool Order::ItemsHasBeenSet() const
{
    return m_itemsHasBeenSet;
}


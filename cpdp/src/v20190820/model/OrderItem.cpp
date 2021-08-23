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

#include <tencentcloud/cpdp/v20190820/model/OrderItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

OrderItem::OrderItem() :
    m_amountHasTaxHasBeenSet(false),
    m_discountHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_modelsHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_priceHasBeenSet(false),
    m_taxCodeHasBeenSet(false)
{
}

CoreInternalOutcome OrderItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AmountHasTax") && !value["AmountHasTax"].IsNull())
    {
        if (!value["AmountHasTax"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `OrderItem.AmountHasTax` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_amountHasTax = value["AmountHasTax"].GetDouble();
        m_amountHasTaxHasBeenSet = true;
    }

    if (value.HasMember("Discount") && !value["Discount"].IsNull())
    {
        if (!value["Discount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `OrderItem.Discount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_discount = value["Discount"].GetDouble();
        m_discountHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Models") && !value["Models"].IsNull())
    {
        if (!value["Models"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderItem.Models` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_models = string(value["Models"].GetString());
        m_modelsHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OrderItem.Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("Unit") && !value["Unit"].IsNull())
    {
        if (!value["Unit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderItem.Unit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unit = string(value["Unit"].GetString());
        m_unitHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderItem.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Price") && !value["Price"].IsNull())
    {
        if (!value["Price"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `OrderItem.Price` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_price = value["Price"].GetDouble();
        m_priceHasBeenSet = true;
    }

    if (value.HasMember("TaxCode") && !value["TaxCode"].IsNull())
    {
        if (!value["TaxCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderItem.TaxCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taxCode = string(value["TaxCode"].GetString());
        m_taxCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OrderItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_modelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Models";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_models.c_str(), allocator).Move(), allocator);
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_unitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unit.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_priceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Price";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_price, allocator);
    }

    if (m_taxCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taxCode.c_str(), allocator).Move(), allocator);
    }

}


double OrderItem::GetAmountHasTax() const
{
    return m_amountHasTax;
}

void OrderItem::SetAmountHasTax(const double& _amountHasTax)
{
    m_amountHasTax = _amountHasTax;
    m_amountHasTaxHasBeenSet = true;
}

bool OrderItem::AmountHasTaxHasBeenSet() const
{
    return m_amountHasTaxHasBeenSet;
}

double OrderItem::GetDiscount() const
{
    return m_discount;
}

void OrderItem::SetDiscount(const double& _discount)
{
    m_discount = _discount;
    m_discountHasBeenSet = true;
}

bool OrderItem::DiscountHasBeenSet() const
{
    return m_discountHasBeenSet;
}

string OrderItem::GetName() const
{
    return m_name;
}

void OrderItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool OrderItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string OrderItem::GetModels() const
{
    return m_models;
}

void OrderItem::SetModels(const string& _models)
{
    m_models = _models;
    m_modelsHasBeenSet = true;
}

bool OrderItem::ModelsHasBeenSet() const
{
    return m_modelsHasBeenSet;
}

int64_t OrderItem::GetTotal() const
{
    return m_total;
}

void OrderItem::SetTotal(const int64_t& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool OrderItem::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

string OrderItem::GetUnit() const
{
    return m_unit;
}

void OrderItem::SetUnit(const string& _unit)
{
    m_unit = _unit;
    m_unitHasBeenSet = true;
}

bool OrderItem::UnitHasBeenSet() const
{
    return m_unitHasBeenSet;
}

string OrderItem::GetStatus() const
{
    return m_status;
}

void OrderItem::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool OrderItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

double OrderItem::GetPrice() const
{
    return m_price;
}

void OrderItem::SetPrice(const double& _price)
{
    m_price = _price;
    m_priceHasBeenSet = true;
}

bool OrderItem::PriceHasBeenSet() const
{
    return m_priceHasBeenSet;
}

string OrderItem::GetTaxCode() const
{
    return m_taxCode;
}

void OrderItem::SetTaxCode(const string& _taxCode)
{
    m_taxCode = _taxCode;
    m_taxCodeHasBeenSet = true;
}

bool OrderItem::TaxCodeHasBeenSet() const
{
    return m_taxCodeHasBeenSet;
}


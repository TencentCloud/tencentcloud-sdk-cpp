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

#include <tencentcloud/ocr/v20181119/model/GeneralMachineItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

GeneralMachineItem::GeneralMachineItem() :
    m_nameHasBeenSet(false),
    m_specificationHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_quantityHasBeenSet(false),
    m_priceHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_taxRateHasBeenSet(false),
    m_taxHasBeenSet(false)
{
}

CoreInternalOutcome GeneralMachineItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralMachineItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Specification") && !value["Specification"].IsNull())
    {
        if (!value["Specification"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralMachineItem.Specification` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specification = string(value["Specification"].GetString());
        m_specificationHasBeenSet = true;
    }

    if (value.HasMember("Unit") && !value["Unit"].IsNull())
    {
        if (!value["Unit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralMachineItem.Unit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unit = string(value["Unit"].GetString());
        m_unitHasBeenSet = true;
    }

    if (value.HasMember("Quantity") && !value["Quantity"].IsNull())
    {
        if (!value["Quantity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralMachineItem.Quantity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quantity = string(value["Quantity"].GetString());
        m_quantityHasBeenSet = true;
    }

    if (value.HasMember("Price") && !value["Price"].IsNull())
    {
        if (!value["Price"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralMachineItem.Price` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_price = string(value["Price"].GetString());
        m_priceHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralMachineItem.Total` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_total = string(value["Total"].GetString());
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("TaxRate") && !value["TaxRate"].IsNull())
    {
        if (!value["TaxRate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralMachineItem.TaxRate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taxRate = string(value["TaxRate"].GetString());
        m_taxRateHasBeenSet = true;
    }

    if (value.HasMember("Tax") && !value["Tax"].IsNull())
    {
        if (!value["Tax"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralMachineItem.Tax` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tax = string(value["Tax"].GetString());
        m_taxHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GeneralMachineItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_specificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Specification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specification.c_str(), allocator).Move(), allocator);
    }

    if (m_unitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unit.c_str(), allocator).Move(), allocator);
    }

    if (m_quantityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quantity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quantity.c_str(), allocator).Move(), allocator);
    }

    if (m_priceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Price";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_price.c_str(), allocator).Move(), allocator);
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_total.c_str(), allocator).Move(), allocator);
    }

    if (m_taxRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taxRate.c_str(), allocator).Move(), allocator);
    }

    if (m_taxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tax.c_str(), allocator).Move(), allocator);
    }

}


string GeneralMachineItem::GetName() const
{
    return m_name;
}

void GeneralMachineItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool GeneralMachineItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string GeneralMachineItem::GetSpecification() const
{
    return m_specification;
}

void GeneralMachineItem::SetSpecification(const string& _specification)
{
    m_specification = _specification;
    m_specificationHasBeenSet = true;
}

bool GeneralMachineItem::SpecificationHasBeenSet() const
{
    return m_specificationHasBeenSet;
}

string GeneralMachineItem::GetUnit() const
{
    return m_unit;
}

void GeneralMachineItem::SetUnit(const string& _unit)
{
    m_unit = _unit;
    m_unitHasBeenSet = true;
}

bool GeneralMachineItem::UnitHasBeenSet() const
{
    return m_unitHasBeenSet;
}

string GeneralMachineItem::GetQuantity() const
{
    return m_quantity;
}

void GeneralMachineItem::SetQuantity(const string& _quantity)
{
    m_quantity = _quantity;
    m_quantityHasBeenSet = true;
}

bool GeneralMachineItem::QuantityHasBeenSet() const
{
    return m_quantityHasBeenSet;
}

string GeneralMachineItem::GetPrice() const
{
    return m_price;
}

void GeneralMachineItem::SetPrice(const string& _price)
{
    m_price = _price;
    m_priceHasBeenSet = true;
}

bool GeneralMachineItem::PriceHasBeenSet() const
{
    return m_priceHasBeenSet;
}

string GeneralMachineItem::GetTotal() const
{
    return m_total;
}

void GeneralMachineItem::SetTotal(const string& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool GeneralMachineItem::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

string GeneralMachineItem::GetTaxRate() const
{
    return m_taxRate;
}

void GeneralMachineItem::SetTaxRate(const string& _taxRate)
{
    m_taxRate = _taxRate;
    m_taxRateHasBeenSet = true;
}

bool GeneralMachineItem::TaxRateHasBeenSet() const
{
    return m_taxRateHasBeenSet;
}

string GeneralMachineItem::GetTax() const
{
    return m_tax;
}

void GeneralMachineItem::SetTax(const string& _tax)
{
    m_tax = _tax;
    m_taxHasBeenSet = true;
}

bool GeneralMachineItem::TaxHasBeenSet() const
{
    return m_taxHasBeenSet;
}


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

#include <tencentcloud/ocr/v20181119/model/VatInvoiceGoodsInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

VatInvoiceGoodsInfo::VatInvoiceGoodsInfo() :
    m_itemHasBeenSet(false),
    m_specificationHasBeenSet(false),
    m_measurementDimensionHasBeenSet(false),
    m_priceHasBeenSet(false),
    m_quantityHasBeenSet(false),
    m_amountHasBeenSet(false),
    m_taxSchemeHasBeenSet(false),
    m_taxAmountHasBeenSet(false)
{
}

CoreInternalOutcome VatInvoiceGoodsInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Item") && !value["Item"].IsNull())
    {
        if (!value["Item"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceGoodsInfo.Item` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_item = string(value["Item"].GetString());
        m_itemHasBeenSet = true;
    }

    if (value.HasMember("Specification") && !value["Specification"].IsNull())
    {
        if (!value["Specification"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceGoodsInfo.Specification` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specification = string(value["Specification"].GetString());
        m_specificationHasBeenSet = true;
    }

    if (value.HasMember("MeasurementDimension") && !value["MeasurementDimension"].IsNull())
    {
        if (!value["MeasurementDimension"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceGoodsInfo.MeasurementDimension` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_measurementDimension = string(value["MeasurementDimension"].GetString());
        m_measurementDimensionHasBeenSet = true;
    }

    if (value.HasMember("Price") && !value["Price"].IsNull())
    {
        if (!value["Price"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceGoodsInfo.Price` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_price = string(value["Price"].GetString());
        m_priceHasBeenSet = true;
    }

    if (value.HasMember("Quantity") && !value["Quantity"].IsNull())
    {
        if (!value["Quantity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceGoodsInfo.Quantity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quantity = string(value["Quantity"].GetString());
        m_quantityHasBeenSet = true;
    }

    if (value.HasMember("Amount") && !value["Amount"].IsNull())
    {
        if (!value["Amount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceGoodsInfo.Amount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_amount = string(value["Amount"].GetString());
        m_amountHasBeenSet = true;
    }

    if (value.HasMember("TaxScheme") && !value["TaxScheme"].IsNull())
    {
        if (!value["TaxScheme"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceGoodsInfo.TaxScheme` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taxScheme = string(value["TaxScheme"].GetString());
        m_taxSchemeHasBeenSet = true;
    }

    if (value.HasMember("TaxAmount") && !value["TaxAmount"].IsNull())
    {
        if (!value["TaxAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceGoodsInfo.TaxAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taxAmount = string(value["TaxAmount"].GetString());
        m_taxAmountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VatInvoiceGoodsInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_itemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Item";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_item.c_str(), allocator).Move(), allocator);
    }

    if (m_specificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Specification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specification.c_str(), allocator).Move(), allocator);
    }

    if (m_measurementDimensionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MeasurementDimension";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_measurementDimension.c_str(), allocator).Move(), allocator);
    }

    if (m_priceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Price";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_price.c_str(), allocator).Move(), allocator);
    }

    if (m_quantityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quantity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quantity.c_str(), allocator).Move(), allocator);
    }

    if (m_amountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Amount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_amount.c_str(), allocator).Move(), allocator);
    }

    if (m_taxSchemeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxScheme";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taxScheme.c_str(), allocator).Move(), allocator);
    }

    if (m_taxAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taxAmount.c_str(), allocator).Move(), allocator);
    }

}


string VatInvoiceGoodsInfo::GetItem() const
{
    return m_item;
}

void VatInvoiceGoodsInfo::SetItem(const string& _item)
{
    m_item = _item;
    m_itemHasBeenSet = true;
}

bool VatInvoiceGoodsInfo::ItemHasBeenSet() const
{
    return m_itemHasBeenSet;
}

string VatInvoiceGoodsInfo::GetSpecification() const
{
    return m_specification;
}

void VatInvoiceGoodsInfo::SetSpecification(const string& _specification)
{
    m_specification = _specification;
    m_specificationHasBeenSet = true;
}

bool VatInvoiceGoodsInfo::SpecificationHasBeenSet() const
{
    return m_specificationHasBeenSet;
}

string VatInvoiceGoodsInfo::GetMeasurementDimension() const
{
    return m_measurementDimension;
}

void VatInvoiceGoodsInfo::SetMeasurementDimension(const string& _measurementDimension)
{
    m_measurementDimension = _measurementDimension;
    m_measurementDimensionHasBeenSet = true;
}

bool VatInvoiceGoodsInfo::MeasurementDimensionHasBeenSet() const
{
    return m_measurementDimensionHasBeenSet;
}

string VatInvoiceGoodsInfo::GetPrice() const
{
    return m_price;
}

void VatInvoiceGoodsInfo::SetPrice(const string& _price)
{
    m_price = _price;
    m_priceHasBeenSet = true;
}

bool VatInvoiceGoodsInfo::PriceHasBeenSet() const
{
    return m_priceHasBeenSet;
}

string VatInvoiceGoodsInfo::GetQuantity() const
{
    return m_quantity;
}

void VatInvoiceGoodsInfo::SetQuantity(const string& _quantity)
{
    m_quantity = _quantity;
    m_quantityHasBeenSet = true;
}

bool VatInvoiceGoodsInfo::QuantityHasBeenSet() const
{
    return m_quantityHasBeenSet;
}

string VatInvoiceGoodsInfo::GetAmount() const
{
    return m_amount;
}

void VatInvoiceGoodsInfo::SetAmount(const string& _amount)
{
    m_amount = _amount;
    m_amountHasBeenSet = true;
}

bool VatInvoiceGoodsInfo::AmountHasBeenSet() const
{
    return m_amountHasBeenSet;
}

string VatInvoiceGoodsInfo::GetTaxScheme() const
{
    return m_taxScheme;
}

void VatInvoiceGoodsInfo::SetTaxScheme(const string& _taxScheme)
{
    m_taxScheme = _taxScheme;
    m_taxSchemeHasBeenSet = true;
}

bool VatInvoiceGoodsInfo::TaxSchemeHasBeenSet() const
{
    return m_taxSchemeHasBeenSet;
}

string VatInvoiceGoodsInfo::GetTaxAmount() const
{
    return m_taxAmount;
}

void VatInvoiceGoodsInfo::SetTaxAmount(const string& _taxAmount)
{
    m_taxAmount = _taxAmount;
    m_taxAmountHasBeenSet = true;
}

bool VatInvoiceGoodsInfo::TaxAmountHasBeenSet() const
{
    return m_taxAmountHasBeenSet;
}


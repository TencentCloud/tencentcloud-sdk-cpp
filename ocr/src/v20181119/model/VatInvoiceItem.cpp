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

#include <tencentcloud/ocr/v20181119/model/VatInvoiceItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace rapidjson;
using namespace std;

VatInvoiceItem::VatInvoiceItem() :
    m_lineNoHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_specHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_quantityHasBeenSet(false),
    m_unitPriceHasBeenSet(false),
    m_amountWithoutTaxHasBeenSet(false),
    m_taxRateHasBeenSet(false),
    m_taxAmountHasBeenSet(false)
{
}

CoreInternalOutcome VatInvoiceItem::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("LineNo") && !value["LineNo"].IsNull())
    {
        if (!value["LineNo"].IsString())
        {
            return CoreInternalOutcome(Error("response `VatInvoiceItem.LineNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lineNo = string(value["LineNo"].GetString());
        m_lineNoHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `VatInvoiceItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Spec") && !value["Spec"].IsNull())
    {
        if (!value["Spec"].IsString())
        {
            return CoreInternalOutcome(Error("response `VatInvoiceItem.Spec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spec = string(value["Spec"].GetString());
        m_specHasBeenSet = true;
    }

    if (value.HasMember("Unit") && !value["Unit"].IsNull())
    {
        if (!value["Unit"].IsString())
        {
            return CoreInternalOutcome(Error("response `VatInvoiceItem.Unit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unit = string(value["Unit"].GetString());
        m_unitHasBeenSet = true;
    }

    if (value.HasMember("Quantity") && !value["Quantity"].IsNull())
    {
        if (!value["Quantity"].IsString())
        {
            return CoreInternalOutcome(Error("response `VatInvoiceItem.Quantity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quantity = string(value["Quantity"].GetString());
        m_quantityHasBeenSet = true;
    }

    if (value.HasMember("UnitPrice") && !value["UnitPrice"].IsNull())
    {
        if (!value["UnitPrice"].IsString())
        {
            return CoreInternalOutcome(Error("response `VatInvoiceItem.UnitPrice` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unitPrice = string(value["UnitPrice"].GetString());
        m_unitPriceHasBeenSet = true;
    }

    if (value.HasMember("AmountWithoutTax") && !value["AmountWithoutTax"].IsNull())
    {
        if (!value["AmountWithoutTax"].IsString())
        {
            return CoreInternalOutcome(Error("response `VatInvoiceItem.AmountWithoutTax` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_amountWithoutTax = string(value["AmountWithoutTax"].GetString());
        m_amountWithoutTaxHasBeenSet = true;
    }

    if (value.HasMember("TaxRate") && !value["TaxRate"].IsNull())
    {
        if (!value["TaxRate"].IsString())
        {
            return CoreInternalOutcome(Error("response `VatInvoiceItem.TaxRate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taxRate = string(value["TaxRate"].GetString());
        m_taxRateHasBeenSet = true;
    }

    if (value.HasMember("TaxAmount") && !value["TaxAmount"].IsNull())
    {
        if (!value["TaxAmount"].IsString())
        {
            return CoreInternalOutcome(Error("response `VatInvoiceItem.TaxAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taxAmount = string(value["TaxAmount"].GetString());
        m_taxAmountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VatInvoiceItem::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_lineNoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LineNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_lineNo.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_specHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Spec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_spec.c_str(), allocator).Move(), allocator);
    }

    if (m_unitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Unit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_unit.c_str(), allocator).Move(), allocator);
    }

    if (m_quantityHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Quantity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_quantity.c_str(), allocator).Move(), allocator);
    }

    if (m_unitPriceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UnitPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_unitPrice.c_str(), allocator).Move(), allocator);
    }

    if (m_amountWithoutTaxHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AmountWithoutTax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_amountWithoutTax.c_str(), allocator).Move(), allocator);
    }

    if (m_taxRateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TaxRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_taxRate.c_str(), allocator).Move(), allocator);
    }

    if (m_taxAmountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TaxAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_taxAmount.c_str(), allocator).Move(), allocator);
    }

}


string VatInvoiceItem::GetLineNo() const
{
    return m_lineNo;
}

void VatInvoiceItem::SetLineNo(const string& _lineNo)
{
    m_lineNo = _lineNo;
    m_lineNoHasBeenSet = true;
}

bool VatInvoiceItem::LineNoHasBeenSet() const
{
    return m_lineNoHasBeenSet;
}

string VatInvoiceItem::GetName() const
{
    return m_name;
}

void VatInvoiceItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool VatInvoiceItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string VatInvoiceItem::GetSpec() const
{
    return m_spec;
}

void VatInvoiceItem::SetSpec(const string& _spec)
{
    m_spec = _spec;
    m_specHasBeenSet = true;
}

bool VatInvoiceItem::SpecHasBeenSet() const
{
    return m_specHasBeenSet;
}

string VatInvoiceItem::GetUnit() const
{
    return m_unit;
}

void VatInvoiceItem::SetUnit(const string& _unit)
{
    m_unit = _unit;
    m_unitHasBeenSet = true;
}

bool VatInvoiceItem::UnitHasBeenSet() const
{
    return m_unitHasBeenSet;
}

string VatInvoiceItem::GetQuantity() const
{
    return m_quantity;
}

void VatInvoiceItem::SetQuantity(const string& _quantity)
{
    m_quantity = _quantity;
    m_quantityHasBeenSet = true;
}

bool VatInvoiceItem::QuantityHasBeenSet() const
{
    return m_quantityHasBeenSet;
}

string VatInvoiceItem::GetUnitPrice() const
{
    return m_unitPrice;
}

void VatInvoiceItem::SetUnitPrice(const string& _unitPrice)
{
    m_unitPrice = _unitPrice;
    m_unitPriceHasBeenSet = true;
}

bool VatInvoiceItem::UnitPriceHasBeenSet() const
{
    return m_unitPriceHasBeenSet;
}

string VatInvoiceItem::GetAmountWithoutTax() const
{
    return m_amountWithoutTax;
}

void VatInvoiceItem::SetAmountWithoutTax(const string& _amountWithoutTax)
{
    m_amountWithoutTax = _amountWithoutTax;
    m_amountWithoutTaxHasBeenSet = true;
}

bool VatInvoiceItem::AmountWithoutTaxHasBeenSet() const
{
    return m_amountWithoutTaxHasBeenSet;
}

string VatInvoiceItem::GetTaxRate() const
{
    return m_taxRate;
}

void VatInvoiceItem::SetTaxRate(const string& _taxRate)
{
    m_taxRate = _taxRate;
    m_taxRateHasBeenSet = true;
}

bool VatInvoiceItem::TaxRateHasBeenSet() const
{
    return m_taxRateHasBeenSet;
}

string VatInvoiceItem::GetTaxAmount() const
{
    return m_taxAmount;
}

void VatInvoiceItem::SetTaxAmount(const string& _taxAmount)
{
    m_taxAmount = _taxAmount;
    m_taxAmountHasBeenSet = true;
}

bool VatInvoiceItem::TaxAmountHasBeenSet() const
{
    return m_taxAmountHasBeenSet;
}


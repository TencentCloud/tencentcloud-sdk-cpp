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

#include <tencentcloud/cpdp/v20190820/model/CreateInvoiceItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

CreateInvoiceItem::CreateInvoiceItem() :
    m_nameHasBeenSet(false),
    m_taxCodeHasBeenSet(false),
    m_totalPriceHasBeenSet(false),
    m_taxRateHasBeenSet(false),
    m_taxAmountHasBeenSet(false),
    m_taxTypeHasBeenSet(false),
    m_modelsHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_priceHasBeenSet(false),
    m_discountHasBeenSet(false),
    m_preferentialPolicyFlagHasBeenSet(false),
    m_zeroTaxFlagHasBeenSet(false),
    m_vatSpecialManagementHasBeenSet(false)
{
}

CoreInternalOutcome CreateInvoiceItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateInvoiceItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("TaxCode") && !value["TaxCode"].IsNull())
    {
        if (!value["TaxCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateInvoiceItem.TaxCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taxCode = string(value["TaxCode"].GetString());
        m_taxCodeHasBeenSet = true;
    }

    if (value.HasMember("TotalPrice") && !value["TotalPrice"].IsNull())
    {
        if (!value["TotalPrice"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateInvoiceItem.TotalPrice` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalPrice = value["TotalPrice"].GetInt64();
        m_totalPriceHasBeenSet = true;
    }

    if (value.HasMember("TaxRate") && !value["TaxRate"].IsNull())
    {
        if (!value["TaxRate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateInvoiceItem.TaxRate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taxRate = value["TaxRate"].GetInt64();
        m_taxRateHasBeenSet = true;
    }

    if (value.HasMember("TaxAmount") && !value["TaxAmount"].IsNull())
    {
        if (!value["TaxAmount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateInvoiceItem.TaxAmount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taxAmount = value["TaxAmount"].GetInt64();
        m_taxAmountHasBeenSet = true;
    }

    if (value.HasMember("TaxType") && !value["TaxType"].IsNull())
    {
        if (!value["TaxType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateInvoiceItem.TaxType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taxType = string(value["TaxType"].GetString());
        m_taxTypeHasBeenSet = true;
    }

    if (value.HasMember("Models") && !value["Models"].IsNull())
    {
        if (!value["Models"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateInvoiceItem.Models` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_models = string(value["Models"].GetString());
        m_modelsHasBeenSet = true;
    }

    if (value.HasMember("Unit") && !value["Unit"].IsNull())
    {
        if (!value["Unit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateInvoiceItem.Unit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unit = string(value["Unit"].GetString());
        m_unitHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateInvoiceItem.Total` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_total = string(value["Total"].GetString());
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("Price") && !value["Price"].IsNull())
    {
        if (!value["Price"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateInvoiceItem.Price` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_price = string(value["Price"].GetString());
        m_priceHasBeenSet = true;
    }

    if (value.HasMember("Discount") && !value["Discount"].IsNull())
    {
        if (!value["Discount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateInvoiceItem.Discount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_discount = value["Discount"].GetInt64();
        m_discountHasBeenSet = true;
    }

    if (value.HasMember("PreferentialPolicyFlag") && !value["PreferentialPolicyFlag"].IsNull())
    {
        if (!value["PreferentialPolicyFlag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateInvoiceItem.PreferentialPolicyFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_preferentialPolicyFlag = string(value["PreferentialPolicyFlag"].GetString());
        m_preferentialPolicyFlagHasBeenSet = true;
    }

    if (value.HasMember("ZeroTaxFlag") && !value["ZeroTaxFlag"].IsNull())
    {
        if (!value["ZeroTaxFlag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateInvoiceItem.ZeroTaxFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zeroTaxFlag = string(value["ZeroTaxFlag"].GetString());
        m_zeroTaxFlagHasBeenSet = true;
    }

    if (value.HasMember("VatSpecialManagement") && !value["VatSpecialManagement"].IsNull())
    {
        if (!value["VatSpecialManagement"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateInvoiceItem.VatSpecialManagement` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vatSpecialManagement = string(value["VatSpecialManagement"].GetString());
        m_vatSpecialManagementHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateInvoiceItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_taxCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taxCode.c_str(), allocator).Move(), allocator);
    }

    if (m_totalPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalPrice, allocator);
    }

    if (m_taxRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taxRate, allocator);
    }

    if (m_taxAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taxAmount, allocator);
    }

    if (m_taxTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taxType.c_str(), allocator).Move(), allocator);
    }

    if (m_modelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Models";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_models.c_str(), allocator).Move(), allocator);
    }

    if (m_unitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unit.c_str(), allocator).Move(), allocator);
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_total.c_str(), allocator).Move(), allocator);
    }

    if (m_priceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Price";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_price.c_str(), allocator).Move(), allocator);
    }

    if (m_discountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Discount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_discount, allocator);
    }

    if (m_preferentialPolicyFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreferentialPolicyFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_preferentialPolicyFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_zeroTaxFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZeroTaxFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zeroTaxFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_vatSpecialManagementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VatSpecialManagement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vatSpecialManagement.c_str(), allocator).Move(), allocator);
    }

}


string CreateInvoiceItem::GetName() const
{
    return m_name;
}

void CreateInvoiceItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateInvoiceItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateInvoiceItem::GetTaxCode() const
{
    return m_taxCode;
}

void CreateInvoiceItem::SetTaxCode(const string& _taxCode)
{
    m_taxCode = _taxCode;
    m_taxCodeHasBeenSet = true;
}

bool CreateInvoiceItem::TaxCodeHasBeenSet() const
{
    return m_taxCodeHasBeenSet;
}

int64_t CreateInvoiceItem::GetTotalPrice() const
{
    return m_totalPrice;
}

void CreateInvoiceItem::SetTotalPrice(const int64_t& _totalPrice)
{
    m_totalPrice = _totalPrice;
    m_totalPriceHasBeenSet = true;
}

bool CreateInvoiceItem::TotalPriceHasBeenSet() const
{
    return m_totalPriceHasBeenSet;
}

int64_t CreateInvoiceItem::GetTaxRate() const
{
    return m_taxRate;
}

void CreateInvoiceItem::SetTaxRate(const int64_t& _taxRate)
{
    m_taxRate = _taxRate;
    m_taxRateHasBeenSet = true;
}

bool CreateInvoiceItem::TaxRateHasBeenSet() const
{
    return m_taxRateHasBeenSet;
}

int64_t CreateInvoiceItem::GetTaxAmount() const
{
    return m_taxAmount;
}

void CreateInvoiceItem::SetTaxAmount(const int64_t& _taxAmount)
{
    m_taxAmount = _taxAmount;
    m_taxAmountHasBeenSet = true;
}

bool CreateInvoiceItem::TaxAmountHasBeenSet() const
{
    return m_taxAmountHasBeenSet;
}

string CreateInvoiceItem::GetTaxType() const
{
    return m_taxType;
}

void CreateInvoiceItem::SetTaxType(const string& _taxType)
{
    m_taxType = _taxType;
    m_taxTypeHasBeenSet = true;
}

bool CreateInvoiceItem::TaxTypeHasBeenSet() const
{
    return m_taxTypeHasBeenSet;
}

string CreateInvoiceItem::GetModels() const
{
    return m_models;
}

void CreateInvoiceItem::SetModels(const string& _models)
{
    m_models = _models;
    m_modelsHasBeenSet = true;
}

bool CreateInvoiceItem::ModelsHasBeenSet() const
{
    return m_modelsHasBeenSet;
}

string CreateInvoiceItem::GetUnit() const
{
    return m_unit;
}

void CreateInvoiceItem::SetUnit(const string& _unit)
{
    m_unit = _unit;
    m_unitHasBeenSet = true;
}

bool CreateInvoiceItem::UnitHasBeenSet() const
{
    return m_unitHasBeenSet;
}

string CreateInvoiceItem::GetTotal() const
{
    return m_total;
}

void CreateInvoiceItem::SetTotal(const string& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool CreateInvoiceItem::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

string CreateInvoiceItem::GetPrice() const
{
    return m_price;
}

void CreateInvoiceItem::SetPrice(const string& _price)
{
    m_price = _price;
    m_priceHasBeenSet = true;
}

bool CreateInvoiceItem::PriceHasBeenSet() const
{
    return m_priceHasBeenSet;
}

int64_t CreateInvoiceItem::GetDiscount() const
{
    return m_discount;
}

void CreateInvoiceItem::SetDiscount(const int64_t& _discount)
{
    m_discount = _discount;
    m_discountHasBeenSet = true;
}

bool CreateInvoiceItem::DiscountHasBeenSet() const
{
    return m_discountHasBeenSet;
}

string CreateInvoiceItem::GetPreferentialPolicyFlag() const
{
    return m_preferentialPolicyFlag;
}

void CreateInvoiceItem::SetPreferentialPolicyFlag(const string& _preferentialPolicyFlag)
{
    m_preferentialPolicyFlag = _preferentialPolicyFlag;
    m_preferentialPolicyFlagHasBeenSet = true;
}

bool CreateInvoiceItem::PreferentialPolicyFlagHasBeenSet() const
{
    return m_preferentialPolicyFlagHasBeenSet;
}

string CreateInvoiceItem::GetZeroTaxFlag() const
{
    return m_zeroTaxFlag;
}

void CreateInvoiceItem::SetZeroTaxFlag(const string& _zeroTaxFlag)
{
    m_zeroTaxFlag = _zeroTaxFlag;
    m_zeroTaxFlagHasBeenSet = true;
}

bool CreateInvoiceItem::ZeroTaxFlagHasBeenSet() const
{
    return m_zeroTaxFlagHasBeenSet;
}

string CreateInvoiceItem::GetVatSpecialManagement() const
{
    return m_vatSpecialManagement;
}

void CreateInvoiceItem::SetVatSpecialManagement(const string& _vatSpecialManagement)
{
    m_vatSpecialManagement = _vatSpecialManagement;
    m_vatSpecialManagementHasBeenSet = true;
}

bool CreateInvoiceItem::VatSpecialManagementHasBeenSet() const
{
    return m_vatSpecialManagementHasBeenSet;
}


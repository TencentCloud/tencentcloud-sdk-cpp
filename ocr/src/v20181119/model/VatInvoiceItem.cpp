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
    m_taxAmountHasBeenSet(false),
    m_taxClassifyCodeHasBeenSet(false),
    m_vehicleTypeHasBeenSet(false),
    m_vehicleBrandHasBeenSet(false),
    m_departurePlaceHasBeenSet(false),
    m_arrivalPlaceHasBeenSet(false),
    m_transportItemsNameHasBeenSet(false),
    m_constructionPlaceHasBeenSet(false),
    m_constructionNameHasBeenSet(false)
{
}

CoreInternalOutcome VatInvoiceItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LineNo") && !value["LineNo"].IsNull())
    {
        if (!value["LineNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceItem.LineNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lineNo = string(value["LineNo"].GetString());
        m_lineNoHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Spec") && !value["Spec"].IsNull())
    {
        if (!value["Spec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceItem.Spec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spec = string(value["Spec"].GetString());
        m_specHasBeenSet = true;
    }

    if (value.HasMember("Unit") && !value["Unit"].IsNull())
    {
        if (!value["Unit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceItem.Unit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unit = string(value["Unit"].GetString());
        m_unitHasBeenSet = true;
    }

    if (value.HasMember("Quantity") && !value["Quantity"].IsNull())
    {
        if (!value["Quantity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceItem.Quantity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quantity = string(value["Quantity"].GetString());
        m_quantityHasBeenSet = true;
    }

    if (value.HasMember("UnitPrice") && !value["UnitPrice"].IsNull())
    {
        if (!value["UnitPrice"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceItem.UnitPrice` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unitPrice = string(value["UnitPrice"].GetString());
        m_unitPriceHasBeenSet = true;
    }

    if (value.HasMember("AmountWithoutTax") && !value["AmountWithoutTax"].IsNull())
    {
        if (!value["AmountWithoutTax"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceItem.AmountWithoutTax` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_amountWithoutTax = string(value["AmountWithoutTax"].GetString());
        m_amountWithoutTaxHasBeenSet = true;
    }

    if (value.HasMember("TaxRate") && !value["TaxRate"].IsNull())
    {
        if (!value["TaxRate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceItem.TaxRate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taxRate = string(value["TaxRate"].GetString());
        m_taxRateHasBeenSet = true;
    }

    if (value.HasMember("TaxAmount") && !value["TaxAmount"].IsNull())
    {
        if (!value["TaxAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceItem.TaxAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taxAmount = string(value["TaxAmount"].GetString());
        m_taxAmountHasBeenSet = true;
    }

    if (value.HasMember("TaxClassifyCode") && !value["TaxClassifyCode"].IsNull())
    {
        if (!value["TaxClassifyCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceItem.TaxClassifyCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taxClassifyCode = string(value["TaxClassifyCode"].GetString());
        m_taxClassifyCodeHasBeenSet = true;
    }

    if (value.HasMember("VehicleType") && !value["VehicleType"].IsNull())
    {
        if (!value["VehicleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceItem.VehicleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vehicleType = string(value["VehicleType"].GetString());
        m_vehicleTypeHasBeenSet = true;
    }

    if (value.HasMember("VehicleBrand") && !value["VehicleBrand"].IsNull())
    {
        if (!value["VehicleBrand"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceItem.VehicleBrand` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vehicleBrand = string(value["VehicleBrand"].GetString());
        m_vehicleBrandHasBeenSet = true;
    }

    if (value.HasMember("DeparturePlace") && !value["DeparturePlace"].IsNull())
    {
        if (!value["DeparturePlace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceItem.DeparturePlace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_departurePlace = string(value["DeparturePlace"].GetString());
        m_departurePlaceHasBeenSet = true;
    }

    if (value.HasMember("ArrivalPlace") && !value["ArrivalPlace"].IsNull())
    {
        if (!value["ArrivalPlace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceItem.ArrivalPlace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_arrivalPlace = string(value["ArrivalPlace"].GetString());
        m_arrivalPlaceHasBeenSet = true;
    }

    if (value.HasMember("TransportItemsName") && !value["TransportItemsName"].IsNull())
    {
        if (!value["TransportItemsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceItem.TransportItemsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transportItemsName = string(value["TransportItemsName"].GetString());
        m_transportItemsNameHasBeenSet = true;
    }

    if (value.HasMember("ConstructionPlace") && !value["ConstructionPlace"].IsNull())
    {
        if (!value["ConstructionPlace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceItem.ConstructionPlace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_constructionPlace = string(value["ConstructionPlace"].GetString());
        m_constructionPlaceHasBeenSet = true;
    }

    if (value.HasMember("ConstructionName") && !value["ConstructionName"].IsNull())
    {
        if (!value["ConstructionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceItem.ConstructionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_constructionName = string(value["ConstructionName"].GetString());
        m_constructionNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VatInvoiceItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_lineNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LineNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lineNo.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_specHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Spec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spec.c_str(), allocator).Move(), allocator);
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

    if (m_unitPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnitPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unitPrice.c_str(), allocator).Move(), allocator);
    }

    if (m_amountWithoutTaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AmountWithoutTax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_amountWithoutTax.c_str(), allocator).Move(), allocator);
    }

    if (m_taxRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taxRate.c_str(), allocator).Move(), allocator);
    }

    if (m_taxAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taxAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_taxClassifyCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxClassifyCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taxClassifyCode.c_str(), allocator).Move(), allocator);
    }

    if (m_vehicleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VehicleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vehicleType.c_str(), allocator).Move(), allocator);
    }

    if (m_vehicleBrandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VehicleBrand";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vehicleBrand.c_str(), allocator).Move(), allocator);
    }

    if (m_departurePlaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeparturePlace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_departurePlace.c_str(), allocator).Move(), allocator);
    }

    if (m_arrivalPlaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ArrivalPlace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_arrivalPlace.c_str(), allocator).Move(), allocator);
    }

    if (m_transportItemsNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransportItemsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transportItemsName.c_str(), allocator).Move(), allocator);
    }

    if (m_constructionPlaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConstructionPlace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_constructionPlace.c_str(), allocator).Move(), allocator);
    }

    if (m_constructionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConstructionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_constructionName.c_str(), allocator).Move(), allocator);
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

string VatInvoiceItem::GetTaxClassifyCode() const
{
    return m_taxClassifyCode;
}

void VatInvoiceItem::SetTaxClassifyCode(const string& _taxClassifyCode)
{
    m_taxClassifyCode = _taxClassifyCode;
    m_taxClassifyCodeHasBeenSet = true;
}

bool VatInvoiceItem::TaxClassifyCodeHasBeenSet() const
{
    return m_taxClassifyCodeHasBeenSet;
}

string VatInvoiceItem::GetVehicleType() const
{
    return m_vehicleType;
}

void VatInvoiceItem::SetVehicleType(const string& _vehicleType)
{
    m_vehicleType = _vehicleType;
    m_vehicleTypeHasBeenSet = true;
}

bool VatInvoiceItem::VehicleTypeHasBeenSet() const
{
    return m_vehicleTypeHasBeenSet;
}

string VatInvoiceItem::GetVehicleBrand() const
{
    return m_vehicleBrand;
}

void VatInvoiceItem::SetVehicleBrand(const string& _vehicleBrand)
{
    m_vehicleBrand = _vehicleBrand;
    m_vehicleBrandHasBeenSet = true;
}

bool VatInvoiceItem::VehicleBrandHasBeenSet() const
{
    return m_vehicleBrandHasBeenSet;
}

string VatInvoiceItem::GetDeparturePlace() const
{
    return m_departurePlace;
}

void VatInvoiceItem::SetDeparturePlace(const string& _departurePlace)
{
    m_departurePlace = _departurePlace;
    m_departurePlaceHasBeenSet = true;
}

bool VatInvoiceItem::DeparturePlaceHasBeenSet() const
{
    return m_departurePlaceHasBeenSet;
}

string VatInvoiceItem::GetArrivalPlace() const
{
    return m_arrivalPlace;
}

void VatInvoiceItem::SetArrivalPlace(const string& _arrivalPlace)
{
    m_arrivalPlace = _arrivalPlace;
    m_arrivalPlaceHasBeenSet = true;
}

bool VatInvoiceItem::ArrivalPlaceHasBeenSet() const
{
    return m_arrivalPlaceHasBeenSet;
}

string VatInvoiceItem::GetTransportItemsName() const
{
    return m_transportItemsName;
}

void VatInvoiceItem::SetTransportItemsName(const string& _transportItemsName)
{
    m_transportItemsName = _transportItemsName;
    m_transportItemsNameHasBeenSet = true;
}

bool VatInvoiceItem::TransportItemsNameHasBeenSet() const
{
    return m_transportItemsNameHasBeenSet;
}

string VatInvoiceItem::GetConstructionPlace() const
{
    return m_constructionPlace;
}

void VatInvoiceItem::SetConstructionPlace(const string& _constructionPlace)
{
    m_constructionPlace = _constructionPlace;
    m_constructionPlaceHasBeenSet = true;
}

bool VatInvoiceItem::ConstructionPlaceHasBeenSet() const
{
    return m_constructionPlaceHasBeenSet;
}

string VatInvoiceItem::GetConstructionName() const
{
    return m_constructionName;
}

void VatInvoiceItem::SetConstructionName(const string& _constructionName)
{
    m_constructionName = _constructionName;
    m_constructionNameHasBeenSet = true;
}

bool VatInvoiceItem::ConstructionNameHasBeenSet() const
{
    return m_constructionNameHasBeenSet;
}

